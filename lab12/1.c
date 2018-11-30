#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int cnt;
    int sum;
    int *num;
    int i;

    printf("정수의 개수 : ");
    scanf("%d", &cnt);

    num = (int *)malloc(sizeof(int) * cnt);
    
    sum = 0;
    for(i = 0; i < cnt; i++) {
        printf("양의 정수를 입력하시요 : ");
        scanf("%d", num + i);
    }
    
    for(i = 0; i < cnt; i++)
        sum += num[i];
    printf("합은 %d입니다.\n", sum);
    free(num);
    return 0;
}