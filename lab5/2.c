#include <stdio.h>
#define WIDTH 9
#define HEIGHT 3

int main(void) {
    int array[HEIGHT][WIDTH];
    int i, j;

    for(i = 0; i < HEIGHT; i++) {
        for(j = 0; j < WIDTH; j++) {
            array[i][j] = (i + 2) * (j + 1);
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}