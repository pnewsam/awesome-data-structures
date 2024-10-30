#include <stdio.h>
#include "processFile.h"
#include "array.h"

#define FILENAME "shakespeare.txt"

int main() {
  // printf("Opening file: %s\n", FILENAME);
  // FILE *file = openFile(FILENAME);

  Array *array = createArray(10);
  insertItem(array, 0, 7357);
  int retrievedValue;
  getItem(array, 0, &retrievedValue);
  printf("Retrieved value is: %d.", retrievedValue);

  freeArray(array);

  return 0;
}
