#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

typedef struct _node {
	char name[LEN];
	struct _node *link;
} NODE;

int main(void) {
	NODE *head = NULL;
	NODE *tail = NULL;
	NODE *new = NULL;
	NODE *temp = NULL;

	head = (NODE *)malloc(sizeof(NODE));
	strcpy(head->name, "진혜진");
	head->link = NULL;
	tail = head;

	new = (NODE *)malloc(sizeof(NODE));
	strcpy(new->name, "진콩이");
	new->link = NULL;
	tail->link = new;
	tail = new;

	new = (NODE *)malloc(sizeof(NODE));
	strcpy(new->name, "진선미");
	new->link = NULL;
	tail->link = new;
	tail = new;
	
	for(temp = head; temp != NULL; temp = temp->link)
		printf("%s\n", temp->name);	

	while(head) {
		temp = head->link;
		free(head);
		head = temp;
	}
	return 0;
}
