#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
typedef struct Node {
	int data;
	struct Node *next;
}Node;
#pragma pack()
//HEAD pointer to maintain track
Node *Head = NULL;
Node *temp = NULL;

Node * create_node(void)
{
	Node *new_node = NULL;
	new_node = (Node *)malloc(sizeof(Node));
	return new_node;
}


void add_node(unsigned int a)
{
	if(Head == NULL) {
		//This is the first node.
		Node *new = create_node();
		new->data = a;
		new->next = NULL;
		Head = new;
		temp = new;
		printf("Created : 1\r\n");
	} else {
		//Not a first node, head is there. Go untill next node is not NULL.
		Node *new = create_node();
		new->data = a;
		new->next = NULL;
		temp->next = new;
		temp = new;
		printf("Created : 2\r\n");
	}
}


void display_node(void)
{
	Node *Display = Head;
	while(Display != NULL) {
		printf("Data - Stored : %d\r\n", Display->data); 
		Display = Display->next;
	}
}

void dlt_node(unsigned int a)
{
	Node *trvse_node = Head;
	Node *dltd_node = NULL;
	Node *prev = NULL;
	//traverse dlt_node from Head node to find int a
	while(trvse_node != NULL) {
		if (trvse_node->data == a){
			//delete this node.
			//Check if this is a head or not
			if(trvse_node == Head) {
				prev = trvse_node;
				dltd_node = trvse_node;
				prev->next = trvse_node->next;
				Head = trvse_node->next;
				free(dltd_node);
				break;
			} else {
				dltd_node = trvse_node;
				prev->next = trvse_node->next;
				free(dltd_node);
				break;
			}
		}
		prev = trvse_node;
		trvse_node = trvse_node->next;
	}
}


int main(void)
{
		//Add node
	add_node(1000);
	add_node(5000);
	add_node(2800);

	//display full items

	dlt_node(1000);
	display_node();

	return 0;
}
