#include <stdio.h>

#define FILENAME "shakespeare.txt"

FILE *openFile(const char *fileName) {
  FILE *file = fopen(fileName, "r");
  if (file == NULL) {
    fprintf(stderr, "Failed to open %s!\n", fileName);
  }
  printf("Successfully opened file %s!\n", fileName);
  return file;
}

int main() {
  printf("Opening file: %s\n", FILENAME);
  FILE *file = openFile(FILENAME);

  return 0;
}
