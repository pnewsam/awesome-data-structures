#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void *safeMalloc(size_t size) {
  void *result = malloc(size);
  if (result == NULL) {
    printf("safeMalloc failed to allocate memory.\n");
    exit(0);
  }
  return result;
}

void *safeCalloc(size_t size, int num) {
  void *result = calloc(size, num);
  if (result == NULL) {
    printf("safeCalloc failed to allocate memory.\n");
    exit(0);
  }
  return result;
}
