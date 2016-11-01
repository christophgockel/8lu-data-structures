#include <stdio.h>

int main() {
  int number = 42;

  printf("number: %d (at %p)\n", number, &number);

  int * pointer = &number;
  printf("pointer: %p\n", pointer);

  *pointer = 20;

  printf("number: %d\n", number);

  int ** pointer_to_pointer = &pointer;
  printf("pointer to pointer: %p\n", pointer_to_pointer);

  **pointer_to_pointer = 10;

  pointer = 0;

  printf("number: %d\n", number);
  printf("pointer: %p\n", pointer);
  printf("pointer to pointer: %p\n", pointer_to_pointer);
}
