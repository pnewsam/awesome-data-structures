#include <stdio.h>

FILE *openFile(const char *fileName) {
  FILE *file = fopen(fileName, "r");
  if (file == NULL) {
    fprintf(stderr, "Failed to open %s!\n", fileName);
  }
  printf("Successfully opened file %s!\n", fileName);
  return file;
}

// A given section heading follows this format:
// 1595
// 
// THE TWO GENTLEMEN OF VERONA
// 
// by William Shakespeare