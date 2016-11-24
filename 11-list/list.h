#ifndef __LIST_H__
#define __LIST_H__

typedef struct list {
  int value;
  struct list * next;
} List;

List * list_create(int value);
int list_size(List * list);
void list_append(List * list, int value);

#endif
