#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename T>
struct Node {
    T key;
    int degree;
    Node<T>* parent;
    Node<T>* child;
    Node<T>* sibling;
};

template <typename T>
class BinomialHeap {
private:
    Node<T>* head;

    Node<T>* mergeTrees(Node<T>* tree1, Node<T>* tree2) {
        if (!tree1) return tree2;
        if (!tree2) return tree1;

        if (tree1->key < tree2->key) {
            tree1->sibling = mergeTrees(tree1->sibling, tree2);
            return tree1;
        } else {
            tree2->sibling = mergeTrees(tree1, tree2->sibling);
            return tree2;
        }
    }

    list<Node<T>*> binomialList;

public:
    BinomialHeap() : head(nullptr) {}

    void insert(T key) {
        Node<T>* newNode = new Node<T>;
        newNode->key = key;
        newNode->degree = 0;
        newNode->parent = nullptr;
        newNode->child = nullptr;
        newNode->sibling = nullptr;

        BinomialHeap<T> tempHeap;
        tempHeap.head = newNode;
        head = mergeTrees(head, tempHeap.head);
    }

    void merge(BinomialHeap<T>& otherHeap) {
        head = mergeTrees(head, otherHeap.head);
        otherHeap.head = nullptr;
    }

    void extractMin() {
        if (!head) return;

        Node<T>* minNode = head;
        Node<T>* prevNode = nullptr;
        Node<T>* currNode = head->sibling;

        while (currNode) {
            if (currNode->key < minNode->key) {
                minNode = currNode;
                prevNode = nullptr;
            } else {
                prevNode = currNode;
            }
            currNode = currNode->sibling;
        }

        if (prevNode) {
            prevNode->sibling = minNode->sibling;
        } else {
            head = minNode->sibling;
        }

        BinomialHeap<T> newHeap;
        Node<T>* child = minNode->child;
        while (child) {
            Node<T>* nextChild = child->sibling;
            child->sibling = newHeap.head;
            child->parent = nullptr;
            newHeap.head = child;
            child = nextChild;
        }

        BinomialHeap<T> tempHeap;
        tempHeap.head = head;
        head = mergeTrees(tempHeap.head, newHeap.head);
        delete minNode;
    }

    bool isEmpty() {
        return !head;
    }

    void printHeap() {
        for (Node<T>* tree : binomialList) {
            Node<T>* curr = tree;
            while (curr) {
                cout << curr->key << " ";
                curr = curr->sibling;
            }
        }
        cout << endl;
    }
};

int main() {
    BinomialHeap<int> heap;

    heap.insert(10);
    heap.insert(7);
    heap.insert(25);
    heap.insert(15);
    heap.insert(30);
    heap.insert(5);

    cout << "Heap after insertions: ";
    heap.printHeap();

    heap.extractMin();
    cout << "Heap after extracting minimum: ";
    heap.printHeap();

    return 0;
}
