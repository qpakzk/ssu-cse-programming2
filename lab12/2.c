#include <stdio.h>
#include <stdlib.h>
#define LEN 50

char* get_word() {
    char *word = (char *)malloc(LEN * sizeof(char));
    scanf("%s", word);

    return word;
}

int main(void) {
    char *word;
    printf("단어를 입력하시오(최대 50글자) : ");

    word = get_word();
    printf("동적 메모리에 저장된 단어는 %s입니다.\n", word);

    free(word);
    return 0;
}