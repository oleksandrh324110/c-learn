#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, const char** argv) {
  if (argc < 2)
    return 0;

  char buff[3];

  strncpy(buff, argv[1], 3);

  if (!strncmp(buff, "cat", 3))
    printf("meow");
  else if (!strncmp(buff, "dog", 3))
    printf("Woof");

  return 0;
}