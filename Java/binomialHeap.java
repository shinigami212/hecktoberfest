import java.util.ArrayList;
import java.util.List;

class Node<T extends Comparable<T>> {
    T key;
    int degree;
    Node<T> parent;
    Node<T> child;
    Node<T> sibling;

    Node(T key) {
        this.key = key;
        this.degree = 0;
        this.parent = null;
        this.child = null;
        this.sibling = null;
    }
}

public class BinomialHeap<T extends Comparable<T>> {
    private Node<T> head;

    public BinomialHeap() {
        head = null;
    }

    private Node<T> mergeTrees(Node<T> tree1, Node<T> tree2) {
        if (tree1 == null)
            return tree2;
        if (tree2 == null)
            return tree1;

        if (tree1.key.compareTo(tree2.key) < 0) {
            tree1.sibling = mergeTrees(tree1.sibling, tree2);
            return tree1;
        } else {
            tree2.sibling = mergeTrees(tree1, tree2.sibling);
            return tree2;
        }
    }

    public void insert(T key) {
        Node<T> newNode = new Node<>(key);
        BinomialHeap<T> tempHeap = new BinomialHeap<>();
        tempHeap.head = newNode;
        head = mergeTrees(head, tempHeap.head);
    }

    public void merge(BinomialHeap<T> otherHeap) {
        head = mergeTrees(head, otherHeap.head);
        otherHeap.head = null;
    }

    public T extractMin() {
        if (head == null)
            return null;

        Node<T> minNode = head;
        Node<T> prevNode = null;
        Node<T> currNode = head.sibling;

        while (currNode != null) {
            if (currNode.key.compareTo(minNode.key) < 0) {
                minNode = currNode;
                prevNode = null;
            } else {
                prevNode = currNode;
            }
            currNode = currNode.sibling;
        }

        if (prevNode != null) {
            prevNode.sibling = minNode.sibling;
        } else {
            head = minNode.sibling;
        }

        BinomialHeap<T> newHeap = new BinomialHeap<>();
        Node<T> child = minNode.child;
        while (child != null) {
            Node<T> nextChild = child.sibling;
            child.sibling = newHeap.head;
            child.parent = null;
            newHeap.head = child;
            child = nextChild;
        }

        BinomialHeap<T> tempHeap = new BinomialHeap<>();
        tempHeap.head = head;
        head = mergeTrees(tempHeap.head, newHeap.head);

        return minNode.key;
    }

    public boolean isEmpty() {
        return head == null;
    }

    public void printHeap() {
        if (head == null)
            return;

        Node<T> current = head;
        while (current != null) {
            System.out.print(current.key + " ");
            current = current.sibling;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        BinomialHeap<Integer> heap = new BinomialHeap<>();

        heap.insert(10);
        heap.insert(7);
        heap.insert(25);
        heap.insert(15);
        heap.insert(30);
        heap.insert(5);

        System.out.println("Heap after insertions:");
        heap.printHeap();

        Integer minKey = heap.extractMin();
        System.out.println("Minimum key extracted: " + minKey);

        System.out.println("Heap after extracting minimum:");
        heap.printHeap();
    }
}
