#include <stdio.h>
#include "processFile.h"

#define FILENAME "shakespeare.txt"

int main() {
  printf("Opening file: %s\n", FILENAME);
  FILE *file = openFile(FILENAME);

  return 0;
}

// This function should, when given a number, print the sonnet of that number.
void printSonnet(int number) {
  printf("Here's sonnet %d", number);
}