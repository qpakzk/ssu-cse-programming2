#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    struct node *head = NULL;
    struct node *tail = NULL;
    struct node *new;
    struct node *temp;
    int data;

    while(1) {
        printf("양의 정수를 입력하세요(종료 -1) : ");
        scanf("%d", &data);
        if(data == -1)
            break;

        new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        if(!head) {
            head = new;
            tail = head;
        }
        else {
            tail->next = new;
            tail = new;
        }
    }

    if(head) {
        temp = head;
        while(temp) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
    printf("NULL\n");

    if(head) {
        temp = head;
        while(temp) {
            tail = temp->next;
            free(temp);
            temp = tail;
        }
    }

    return 0;
}