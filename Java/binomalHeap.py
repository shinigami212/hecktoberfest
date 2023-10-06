import math

class Node:
    def __init__(self, key):
        self.key = key
        self.degree = 0
        self.parent = None
        self.child = None
        self.sibling = None

class BinomialHeap:
    def __init__(self):
        self.head = None

    def merge_trees(self, tree1, tree2):
        if tree1 is None:
            return tree2
        if tree2 is None:
            return tree1

        if tree1.key < tree2.key:
            tree1.sibling = self.merge_trees(tree1.sibling, tree2)
            return tree1
        else:
            tree2.sibling = self.merge_trees(tree1, tree2.sibling)
            return tree2

    def insert(self, key):
        new_node = Node(key)
        temp_heap = BinomialHeap()
        temp_heap.head = new_node
        self.head = self.merge_trees(self.head, temp_heap.head)

    def merge(self, other_heap):
        self.head = self.merge_trees(self.head, other_heap.head)
        other_heap.head = None

    def extract_min(self):
        if not self.head:
            return None

        min_node = self.head
        prev_node = None
        curr_node = self.head.sibling

        while curr_node:
            if curr_node.key < min_node.key:
                min_node = curr_node
                prev_node = None
            else:
                prev_node = curr_node
            curr_node = curr_node.sibling

        if prev_node:
            prev_node.sibling = min_node.sibling
        else:
            self.head = min_node.sibling

        new_heap = BinomialHeap()
        child = min_node.child
        while child:
            next_child = child.sibling
            child.sibling = new_heap.head
            child.parent = None
            new_heap.head = child
            child = next_child

        temp_heap = BinomialHeap()
        temp_heap.head = self.head
        self.head = self.merge_trees(temp_heap.head, new_heap.head)

        return min_node.key

    def is_empty(self):
        return not self.head

    def print_heap(self):
        if not self.head:
            return

        current = self.head
        while current:
            print(current.key, end=" ")
            current = current.sibling

        print()

# Example usage:
heap = BinomialHeap()

heap.insert(10)
heap.insert(7)
heap.insert(25)
heap.insert(15)
heap.insert(30)
heap.insert(5)

print("Heap after insertions:")
heap.print_heap()

min_key = heap.extract_min()
print(f"Minimum key extracted: {min_key}")

print("Heap after extracting minimum:")
heap.print_heap()
