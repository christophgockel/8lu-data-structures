#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"

#define run_test(function_name) \
  printf("%s\n", #function_name); \
  function_name();

void test_new_list_is_created_with_key_and_value() {
  List * l = list_create("key", 42);

  assert(strcmp(l->key, "key") == 0);
  assert(l->value == 42);
  assert(l->next == NULL);
}

void test_new_list_has_size_of_1() {
  List * list = list_create("key", 42);

  assert(list_size(list) == 1);
}

void test_appending_increases_size() {
  List * l = list_create("", 10);

  list_append(l, "", 20);

  assert(list_size(l) == 2);
}

void test_appending_sets_value_and_key() {
  List *l = list_create("key", 1);

  list_append(l, "other key", 42);

  assert(strcmp(l->next->key, "other key") == 0);
  assert(l->next->value == 42);
}

int main() {
  run_test(test_new_list_is_created_with_key_and_value);
  run_test(test_new_list_has_size_of_1);
  run_test(test_appending_increases_size);
  run_test(test_appending_sets_value_and_key);

  printf("OK\n");
}

