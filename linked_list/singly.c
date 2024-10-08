#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
}node;


int main(void)
{
	node *head = NULL;
	node A,B;

	head = &A;
	A.data = 100;
	A.next = &B;

	B.data = 200;
	B.next = NULL;

	printf("Node : A --> %d, Node : B --> %d\r\n", head->data, (head->next)->data);

	return 0;
}
