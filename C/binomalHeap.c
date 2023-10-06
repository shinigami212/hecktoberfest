#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    int degree;
    struct Node* parent;
    struct Node* child;
    struct Node* sibling;
};

struct BinomialHeap {
    struct Node* head;
};

struct Node* mergeTrees(struct Node* tree1, struct Node* tree2) {
    if (!tree1)
        return tree2;
    if (!tree2)
        return tree1;

    if (tree1->key < tree2->key) {
        tree1->sibling = mergeTrees(tree1->sibling, tree2);
        return tree1;
    } else {
        tree2->sibling = mergeTrees(tree1, tree2->sibling);
        return tree2;
    }
}

struct BinomialHeap* createHeap() {
    struct BinomialHeap* heap = (struct BinomialHeap*)malloc(sizeof(struct BinomialHeap));
    heap->head = NULL;
    return heap;
}

void insert(struct BinomialHeap* heap, int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->degree = 0;
    newNode->parent = NULL;
    newNode->child = NULL;
    newNode->sibling = NULL;

    struct BinomialHeap* tempHeap = createHeap();
    tempHeap->head = newNode;
    heap->head = mergeTrees(heap->head, tempHeap->head);
}

void merge(struct BinomialHeap* heap1, struct BinomialHeap* heap2) {
    heap1->head = mergeTrees(heap1->head, heap2->head);
    free(heap2);
}

int extractMin(struct BinomialHeap* heap) {
    if (!heap->head)
        return -1;

    struct Node* minNode = heap->head;
    struct Node* prevNode = NULL;
    struct Node* currNode = heap->head->sibling;

    while (currNode) {
        if (currNode->key < minNode->key) {
            minNode = currNode;
            prevNode = NULL;
        } else {
            prevNode = currNode;
        }
        currNode = currNode->sibling;
    }

    if (prevNode) {
        prevNode->sibling = minNode->sibling;
    } else {
        heap->head = minNode->sibling;
    }

    struct BinomialHeap* newHeap = createHeap();
    struct Node* child = minNode->child;
    while (child) {
        struct Node* nextChild = child->sibling;
        child->sibling = newHeap->head;
        child->parent = NULL;
        newHeap->head = child;
        child = nextChild;
    }

    struct BinomialHeap* tempHeap = createHeap();
    tempHeap->head = heap->head;
    heap->head = mergeTrees(tempHeap->head, newHeap->head);

    int minKey = minNode->key;
    free(minNode);
    return minKey;
}

int isEmpty(struct BinomialHeap* heap) {
    return !heap->head;
}

void printHeap(struct Node* node) {
    if (!node)
        return;

    printf("%d ", node->key);
    printHeap(node->sibling);
}

void display(struct BinomialHeap* heap) {
    if (!heap->head)
        return;

    printHeap(heap->head);
    printf("\n");
}

int main() {
    struct BinomialHeap* heap = createHeap();

    insert(heap, 10);
    insert(heap, 7);
    insert(heap, 25);
    insert(heap, 15);
    insert(heap, 30);
    insert(heap, 5);

    printf("Heap after insertions: ");
    display(heap);

    int minKey = extractMin(heap);
    printf("Minimum key extracted: %d\n", minKey);

    printf("Heap after extracting minimum: ");
    display(heap);

    return 0;
}
