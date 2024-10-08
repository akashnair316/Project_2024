#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t a = 0xa; //1010 : output : 0101 return uint8_t : 5
	
	uint8_t mask = 0x3, last_2 = 0, first_2 = 0;

	last_2 = (a & mask);
	last_2 ^= mask;

	first_2 = a >> 2;
	first_2 = (first_2 & mask);
	first_2 ^= mask;
	first_2 = first_2 << 2;

	printf("%d\r\n", first_2 | last_2);

	
	return 0;
}
