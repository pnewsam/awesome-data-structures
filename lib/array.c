// Takeaways
// - In C, passing by reference allows use of side effects for error handling
// - getItem and setItem should only permit operations on indices that are already within the bounds of the current array size
// - insertItem and deleteItem are shifty -- insert will shift right and delete will shift left to acommodate changes

#include <stddef.h>
#include <stdbool.h>
#include "utils.h"

typedef struct {
  int *items;
  int size;
  int capacity;
} Array;

Array *createArray(int capacity) {
  Array *array = (Array *)safeMalloc(sizeof(Array));

  int *items = (int *)calloc(sizeof(int), capacity);

  array->items = items;
  array->capacity = capacity;
  array->size = 0;

  return array;
}

bool getItem(Array *array, int index, int *value) {
  if (array == NULL || index < 0 || index >= array->size) {
    printf("Failed to get item.\n");
    return false;
  }

  *value = array->items[index];

  return true;
}

bool setItem(Array *array, int index, int value) {
  if (array == NULL || index < 0 || index >= array->capacity) {
    printf("Failed to set item.\n");
    return false;
  } else {
    array->items[index] = value;
    if (index >= array->size) {
      array->size++;
    }
    return true;
  }
}

bool insertItem(Array *array, int index, int value) {
  if (array == NULL || array->size >= array->capacity || index > array->size) {
    printf("Failed to insert item.\n");
    return false;
  } else {
    for (int i = array->size; i > index; i--) {
      array->items[i] = array->items[i - 1];
    }

    array->items[index] = value;
    array->size++;

    return true;
  }
}

bool removeItem(Array *array, int index) {
  if (array == NULL || index >= array->size) {
    printf("Failed to delete item.\n");
    return false;
  } else {
    for (int i = index; i < array->size; i++) {
      array->items[i] = array->items[i + 1];
    }
    array->size--;
    return true;
  }
}

void printArray(Array *array) {
  if (array == NULL) {
      printf("Failed to print array. Array is NULL.\n");
      return;
  }
  printf("Array is: [");
  for (int i = 0; i < array->size; i++) {
      printf("%d", array->items[i]);
      if (i < array->size - 1) {
          printf(", ");
      }
  }
  printf("]\n");
}

void freeArray(Array *array) {
  free(array->items);
  free(array);
}
