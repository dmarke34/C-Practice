#include <stdio.h>

int main()
{

    int num;
    int bitPos = 2;
    scanf("%d", &num);
    int resultMani = num ^ (1 << bitPos);
    int resultDec = num ^ (4);
    printf("%d\n", resultMani);
    printf("%d\n", resultDec);
    return 0;
}