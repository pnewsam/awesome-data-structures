#ifndef ARRAY_H
#define ARRAY_H

#include <stdbool.h>

typedef struct {
  int *items;
  int size;
  int capacity;
} Array;

Array *createArray(size_t size);

bool getItem(Array *array, int index, int *value);

bool setItem(Array *array, int index, int value);

bool insertItem(Array *array, int index, int value);

bool removeItem(Array *array, int index, int value);

void printArray(Array *array);

void freeArray(Array *array);

#endif