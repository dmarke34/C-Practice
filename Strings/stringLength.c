#include <stdio.h>

int myStrlen(char *str)
{
    int n = 0;
    int count = 0;
    while (*(str + n))
    {

        count += 1;
        n++;
    }

    return count;
}

int main()
{
    char word[] = "hello";
    printf("Length: %d\n", myStrlen(word));
    return 0;
}