#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int inverNum = num - 1;
    printf("%d\n", num & inverNum);
    if ((num & inverNum) == 0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}