#include <stdio.h>
#include <stdlib.h>

struct Human {
  const char *name;
  int age;
  int height;
  int weight;
};

int main() {
  struct Human *man = malloc(sizeof(struct Human));
  printf("%s\n", man->name);
}