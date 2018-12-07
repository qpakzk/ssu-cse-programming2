#include <stdio.h>
#define SIZE 2

struct complex_number {
    double real;
    double imag;
};

int main(void) {
    struct complex_number number[SIZE], sum;
    int i;
    
    printf("첫 번째 복소수를 입력하시오(a, b) : ");
    scanf("%lf%lf", &number[0].real, &number[0].imag);

    printf("두 번째 복소수를 입력하시오(a, b) : ");
    scanf("%lf%lf", &number[1].real, &number[1].imag);

    sum.real = number[0].real + number[1].real;
    sum.imag = number[0].imag + number[1].imag;

    printf("%.1lf + %.1lfi\n", sum.real, sum.imag);
    return 0;
}