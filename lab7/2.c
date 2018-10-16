#include <stdio.h>
#define SIZE 5

int main(void) {
    int data[SIZE];
    int i;
    int *p;
    printf("5개의 정수를 입력하시요 : ");
    for(i = 0; i < SIZE; i++)
        scanf("%d", data + i);
    
    printf("역순 : ");
    for(p = data + SIZE - 1; p != (data - 1); p--)
        printf("%d ", *p);
    printf("\n");
    return 0;
}