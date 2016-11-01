#include <assert.h>
#include <stdio.h>

#define run_test(function_name) \
  printf("%s\n", #function_name); \
  function_name();

void test_addition() {
  assert(3 == addition(1, 2));
}

int main() {
  run_test(test_addition);
}

