#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long int n) {
  for (long long int i = 2; i < sqrt(n) + 1; i++)
    if (n % 2 == 0)
      return false;
  return true;
}

int main() {
  long long int n = 13;
  printf("is prime %lld?: %s", n, isPrime(n) ? "yes" : "no");
}