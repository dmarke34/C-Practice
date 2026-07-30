#include <stdio.h>

void myStrcpy(char *dest, char *src)
{
    int n = 0;
    while (*(src + n))
    {
        *(dest + n) = *(src + n);
        n++;
    }

    *(dest + n) = '\0';
}

int main()
{

    char src[] = "hello";
    char dest[20];

    myStrcpy(dest, src);

    printf("%s\n", dest);

    return 0;
}