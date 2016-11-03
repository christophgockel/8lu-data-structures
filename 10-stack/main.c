#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define run_test(function_name) \
  printf("%s\n", #function_name); \
  function_name();

typedef struct Stack {
} Stack;

void test_new_stack_is_empty() {
  Stack *stack = stack_create();

  assert(0 == stack_size(stack));
}

int main() {
  run_test(test_new_stack_is_empty);
}

