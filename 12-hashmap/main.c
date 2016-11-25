#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "../11-list/list.h"
#include "hashmap.h"

#define run_test(function_name) \
  printf("%s\n", #function_name); \
  function_name();

void test_new_hashmap_is_empty() {
  Hashmap * map = hashmap_create();

  assert(hashmap_size(map) == 0);
}

int main() {
  run_test(test_new_hashmap_is_empty);

  printf("OK\n");
}

