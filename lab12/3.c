#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 100

struct phone {
    char name[LEN];
    char number[LEN];
};

int main(void) {
    struct phone *phones;
    int size, i;

    printf("주소의 개수 : ");
    scanf("%d", &size);


    if((phones = (struct phone *)malloc(sizeof(struct phone) * size)) == NULL) {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    for(i = 0; i < size; i++) {
        printf("이름을 입력하시오 : ");
        getchar();
        fgets(phones[i].name, LEN, stdin); 
        phones[i].name[strlen(phones[i].name) - 1] = 0;

        printf("휴대폰 번호를 입력하시오 : ");
        fgets(phones[i].number, LEN, stdin);
        phones[i].number[strlen(phones[i].number) - 1] = 0; 
    }

    printf("========================\n");
    printf("이름 \t 휴대폰 번호 \n");
    printf("========================\n");
    
    for(i=0;i<size;i++)
        printf("%s \t %s \n", phones[i].name, phones[i].number);
    printf("========================\n");

    free(phones);
    return 0;
}
