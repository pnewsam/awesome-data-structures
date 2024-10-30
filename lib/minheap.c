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

int parentIdx(int index) {
  return (index - 1) / 2;
}

int parentEl(Heap *heap, int index) {
  return heap->elements[parentIdx(index)];
}

int leftIdx(int index) {
  return (2 * index) + 1;
}

int leftEl(Heap *heap, int index) {
  return heap->elements[leftIdx(index)];
}

int rightIdx(int index) {
  return (2 * index) + 2;
}

int rightEl(Heap *heap, int index) {
  return heap->elements[rightIdx(index)];
}

bool insert(Heap *heap, int index, int element) {
  int smallest = element;
  int left = leftEl(heap, index);
  int right = rightEl(heap, index);

  if (index < heap->size && left < element) {
    // Left is new minimum in subtree
    heap->elements[index] = left;


    return insert(heap, leftIdx(index), left);
  } else if (index < heap->size && right < element) {
    // Right is new minimum in subtree
    smallest = right;
  } else {
    // Current is already minimum
    return true;
  }

}

bool extractMin(Heap *heap, int *element) {
  *element = heap->elements[0];

  int lastElement = heap->elements[heap->size - 1];

  return true;
}

bool bubbleUp(Heap *heap) {

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
