#include <stdio.h>

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 4;
    int y = 2;

    swap(&x, &y);
    printf("%d, %d\n", x, y);

    return 0;
}