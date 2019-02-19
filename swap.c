#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int temp;

    num1 = 3;
    num2 = 5;
    printf("num1: %d, num2: %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("num1: %d, num2: %d\n", num1, num2);
    return(0);
}