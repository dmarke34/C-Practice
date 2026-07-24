#include <stdio.h>
#include <stdint.h>

int main()
{
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    num1 = num1 ^ num2;
    num2 = num2 ^ num1;
    num1 = num1 ^ num2;
    printf("Test: %d \n", num1);
    printf("Test: %d", num2);
    return 0;
}
