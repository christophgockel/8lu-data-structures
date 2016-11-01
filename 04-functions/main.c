#include <stdio.h>

int first_function() {
  return 1;
}

int second_function();
int third_function(int, int);

int main() {
  printf("first_function(): %d\n", first_function());
  printf("second_function(): %d\n", second_function());
  printf("third_function(1, 2): %d\n", third_function(1, 2));
}

int second_function() {
  return 2;
}

int third_function(int a, int b) {
  return a + b;
}
