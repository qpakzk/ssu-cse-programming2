#include <stdio.h>
#include <string.h>
#define BUFSIZE 10

int main(void) {
    char y_n[2];
    char booked[BUFSIZE];
    int num;
    int i;
    for(i = 0; i < BUFSIZE; i++)
        booked[i] = 'O';
    while(1) {
        printf("좌석을 예약하시겠습니까? ( y 또는 n ) ");
        scanf("%s", y_n);
        if(!strcmp(y_n, "y")) {
            printf("몇 번째 좌석을 예약하시겠습니까? ");
            scanf("%d", &num);
            if(num < 1 || num > 10)
                printf("존재하지 않는 좌석입니다.\n");
            else if(booked[num - 1] == 'X')
                printf("이미 예약된 좌석입니다. 다른 좌석을 선택하세요.\n");
            else {
                booked[num - 1] = 'X';
                printf("예약되었습니다.\n");
            }
            printf("-----------------------------------\n");
            printf(" 1 2 3 4 5 6 7 8 9 10\n");
            printf("-----------------------------------\n");
            for(i = 0; i < BUFSIZE; i++)
                printf(" %c", booked[i]);
            printf("\n");
        }
        else if(!strcmp(y_n, "n"))
            break;
    }
    return 0;
}