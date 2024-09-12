#include <stdbool.h>
#include "utils.h"

/*
values = [1,2,3,4,5,6,7]
indices= [0,1,2,3,4,5,6]

      1
    /   \
   2     3
  / \   / \
 4   5 6   7
*/

typedef struct {
  int *elements;
  int size;
} Heap;

int parent(int index) {
  return (index - 1) / 2;
}

int leftChild(int index) {
  return (2 * index) + 1;
}

int rightChild(int index) {
  return (2 * index) + 2;
}

bool insert(Heap *heap, int value) {
  return true;
}

bool extractMin(Heap *heap, int *value) {
  *value = heap->elements[0];

  int lastValue = heap->elements[heap->size - 1];


  return true;
}

bool bubbleDown(int *elements) {
  
}

bool heapify(Heap *heap) {
  for (int i = 0; i < heap->size; i++) {

  }

  return true;
}

bool buildHeap(int *elements, int size) {
  Heap *heap = (Heap *)safeMalloc(sizeof(Heap));
  int *heapElements = safeCalloc(sizeof(int), size);

  heap->elements = heapElements;
  heap->size = size;

  for (int i = 0; i < size; i++) {
    heapElements[i] = elements[i];
  }

  heapify(heap);

  return true;
}
