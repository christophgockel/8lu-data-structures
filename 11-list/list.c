#include <stdlib.h>
#include <stdio.h>
#include "list.h"

List * list_create(char * key, int value) {
  List *list = (List *)malloc(sizeof(List));

  list->key = key;
  list->value = value;
  list->next = NULL;

  return list;
}

int list_size(List * list) {
  int count = 0;
  List *current = list;

  while (current != NULL) {
    count++;
    current = current->next;
  }
  return count;
}

void list_append(List * list, char * key, int value) {
  List *next_list = list_create(key, value);
  list->next = next_list;
}

