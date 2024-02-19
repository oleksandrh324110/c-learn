#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long int n) {
  for (long long int i = 2; i < sqrt(n) + 1; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main(void) {
  long long int n;

  while (scanf("%lld", &n) == 1) {
    printf("%s\n", isPrime(n) ? "prime" : "not prime");
  }

  return 0;
}
