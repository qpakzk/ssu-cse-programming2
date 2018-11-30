#include <stdio.h>
#define SIZE 10

int main(void) {
    int mult[SIZE][SIZE];
    int i, j;
    int operand1, operand2;
    for(i = 1; i < SIZE; i++) {
        for(j = 1; j < SIZE; j++) {
            mult[i][j] = i * j;
        }
    }

    printf("알고 싶은 구구단을 입력하시오(예: 9 9): ");
    scanf("%d%d", &operand1, &operand2);
    if(operand1 < 1 || operand1 > 9 || operand2 < 1 || operand2 > 9)
        printf("잘못 입력하였습니다.\n");
    else
        printf("%d X %d = %d\n", operand1, operand2, mult[operand1][operand2]);
    return 0;
}