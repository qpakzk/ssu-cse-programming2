#include <stdio.h>
#include <string.h>
#define NAME_LEN 19
#define FRUIT_COUNT 5

int main(void) {
    char fruit[FRUIT_COUNT][NAME_LEN];
    int i;
    int longest_fruit_index;
    int longest_fruit_len;
    int fruit_len;

    printf("5개의 과일 이름 입력 : ");
    for(i = 0; i < FRUIT_COUNT; i++)
        scanf("%s", fruit[i]);
 
    longest_fruit_index = 0;
    longest_fruit_len = strlen(fruit[longest_fruit_index]);
    for(i = 1; i < FRUIT_COUNT; i++) {
        fruit_len = strlen(fruit[i]);
        if(longest_fruit_len < fruit_len) {
            longest_fruit_len = fruit_len;
            longest_fruit_index = i;
        }
    }
    
    printf("길이가 가장 긴 과일 이름은 %s입니다.\n", fruit[longest_fruit_index]);
    return 0;
}