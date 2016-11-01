#include <stdio.h>
#include <stdlib.h>

struct Thing {
  int value;
};

typedef struct Thing Thing;

Thing thing_new() {
  Thing t;
  t.value = 0;
  return t;
}

Thing *thing_create() {
  Thing *t = (Thing *)malloc(sizeof(Thing));
  return t;
}

int main() {
  Thing t1 = thing_new();
  t1.value = 4;

  printf("t1.value = %d\n", t1.value);

  Thing *t2 = thing_create();
  t2->value = 8;

  printf("t2->value = %d\n", t2->value);
  printf("(*t2).value = %d\n", (*t2).value);

  free(t2);
}

