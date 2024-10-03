#include <stdio.h>

void func_1(void)
{
	printf("Function 1\r\n");
}

void func_2(void)
{
	printf("Function 1\r\n");
}

int main(void)
{
	void (*f_ptr)(); //Declaring a void "function pointer"

	f_ptr = func_1; //Assigning Address of function 1.
	f_ptr(); //Dereferencing function pointer.

	return 0;
}
