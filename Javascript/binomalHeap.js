class Node {
  constructor(key) {
    this.key = key;
    this.degree = 0;
    this.parent = null;
    this.child = null;
    this.sibling = null;
  }
}

class BinomialHeap {
  constructor() {
    this.head = null;
  }

  mergeTrees(tree1, tree2) {
    if (!tree1) return tree2;
    if (!tree2) return tree1;

    if (tree1.key < tree2.key) {
      tree1.sibling = this.mergeTrees(tree1.sibling, tree2);
      return tree1;
    } else {
      tree2.sibling = this.mergeTrees(tree1, tree2.sibling);
      return tree2;
    }
  }

  insert(key) {
    const newNode = new Node(key);
    const tempHeap = new BinomialHeap();
    tempHeap.head = newNode;
    this.head = this.mergeTrees(this.head, tempHeap.head);
  }

  merge(otherHeap) {
    this.head = this.mergeTrees(this.head, otherHeap.head);
    otherHeap.head = null;
  }

  extractMin() {
    if (!this.head) return null;

    let minNode = this.head;
    let prevNode = null;
    let currNode = this.head.sibling;

    while (currNode) {
      if (currNode.key < minNode.key) {
        minNode = currNode;
        prevNode = null;
      } else {
        prevNode = currNode;
      }
      currNode = currNode.sibling;
    }

    if (prevNode) {
      prevNode.sibling = minNode.sibling;
    } else {
      this.head = minNode.sibling;
    }

    const newHeap = new BinomialHeap();
    let child = minNode.child;
    while (child) {
      const nextChild = child.sibling;
      child.sibling = newHeap.head;
      child.parent = null;
      newHeap.head = child;
      child = nextChild;
    }

    const tempHeap = new BinomialHeap();
    tempHeap.head = this.head;
    this.head = this.mergeTrees(tempHeap.head, newHeap.head);

    return minNode.key;
  }

  isEmpty() {
    return !this.head;
  }

  printHeap(node) {
    if (!node) return;

    process.stdout.write(`${node.key} `);
    this.printHeap(node.sibling);
  }

  display() {
    if (!this.head) return;

    this.printHeap(this.head);
    console.log();
  }
}

const heap = new BinomialHeap();

heap.insert(10);
heap.insert(7);
heap.insert(25);
heap.insert(15);
heap.insert(30);
heap.insert(5);

console.log("Heap after insertions:");
heap.display();

const minKey = heap.extractMin();
console.log(`Minimum key extracted: ${minKey}`);

console.log("Heap after extracting minimum:");
heap.display();
