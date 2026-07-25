#include <stdio.h>

void doubleIt(int *n)
{
    int temp = *n * 2;
    *n = temp;
}
int main()
{
    int a = 5;
    printf("Before: a = %d\n", a);

    doubleIt(&a);

    printf("After: a = %d\n", a);
    return 0;
}
