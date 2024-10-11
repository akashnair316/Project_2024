#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
}node;

node * create(void)
{
	node * newnode = (node *)malloc(sizeof(node));
	return newnode;
}

void insert(node *head, int data)
{
	node *new = create();
	new->data = data;
	new->next = NULL;
	node *prev = new;

	if(*head == NULL) {
		*head = new;
	} else {
		prev->next = new;
		prev = new;
	}
}

int main(void)
{
	node *head = NULL;
	
	//insert
	insert(&head, 100);
	insert(&head, 200);

	display(&head);

	return 0;
}
