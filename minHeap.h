#ifndef MIN_HEAP_H
#define MIN_HEAP_H

int parent(int index);

int leftChild(int index);

int rightChild(int index);

bool insert(int *heap, int element);

bool remove(int *heap);

bool extractMin(int *heap);

bool heapify(int *elements);

bool buildHeap(int *elements);

#endif MIN_HEAP_H