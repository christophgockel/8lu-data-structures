#ifndef __LIST_H__
#define __LIST_H__

typedef struct list {
  char * key;
  int value;
  struct list * next;
} List;

List * list_create(char *, int);
int list_size(List *);
void list_append(List *, char *, int);

#endif
