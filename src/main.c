#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef int8_t our_type;

int main(void) {
	our_type n = 12;

	for (
		our_type i = 0, mask = (our_type)1 << (sizeof(our_type) * 8 - 1);
		(uint32_t)i < sizeof(our_type) * 8;
		i++, mask = (our_type)1 << (sizeof(our_type) * 8 - 1 - i))
	{
		if (i && i % 4 == 0)
			putchar(' ');

		putchar(n & mask ? '1' : '0');
	} putchar('\n');

	return 0;
}
