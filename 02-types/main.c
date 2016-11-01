#include <stdio.h>

int main() {
  int    number           = 42;
  float  another_number   = 42.5;
  double a_better_float   = 42.55;
  char   single_character = 'g';
  char   a_string[]        = "multiple characters";

  printf("int:      %d\n", number);
  printf("float:    %.1f\n", another_number);
  printf("double:   %.2f\n", a_better_float);
  printf("char:     %d\n", single_character);
  printf("\"string\": %s\n", a_string);
}
