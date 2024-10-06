//input will be a string hex = "0xAb3" with a NULL terminator \0
//Convert the hex into decimal

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

unsigned int hex_to_dec(char *hex_str, unsigned int *bytes)
{
	int i = 0;
	unsigned int decimal = 0;


	while(hex_str[i] != '\0') {
		int data_tmp = hex_str[i] - '0';

		if(hex_str[i] >= 'a' && hex_str[i] <= 'f') {
			data_tmp = hex_str[i] - 'a' + 10;
		}
		else if(hex_str[i] >= 'A' && hex_str[i] <= 'F') {
			data_tmp = hex_str[i] - 'A' + 10;
		}
		decimal += pow(16, *bytes - 1) * data_tmp;
		*bytes = *bytes - 1;
		i++;
	}
	return decimal; //unsigned int : decimal value of hex string.
}


int main(void)
{
	unsigned int decimal = 0, bytes = 0;
	char hex_str[] = "a8";

	bytes = strlen(hex_str);
	decimal = hex_to_dec(hex_str, &bytes);
	printf("Converted hex to dec :%d decimal", decimal);

	return 0;
}
