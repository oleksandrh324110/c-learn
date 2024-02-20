#include <stdio.h>
#include <stdbool.h>

int square(int eax) {
  eax = eax * eax;
  return eax;
}

int main(void) {
  int eax = 0;
  int ebx = square(eax);

  return ebx;
}
