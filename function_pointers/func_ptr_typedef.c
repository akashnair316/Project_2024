#include <stdio.h>

void func_1(int a)
{
	printf("Function 1 : %d\r\n", a);
}

void func_2(char a)
{
	printf("Function 2 : %c\r\n", a);
}

typedef void (*f_ptr)(int);
typedef void (*f_ptr2)(char);

int main(void)
{

	f_ptr fp;
	f_ptr2 fp2;
	fp = func_1; //Assigning Address of function 1.
	fp(10); //Dereferencing function pointer.
	fp2 = func_2; //Assigning Address of function 1.
	fp2('x'); //Dereferencing function pointer.

	return 0;
}
