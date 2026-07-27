#include <stdio.h>

void myStrcpy(char *dest, char *src)
{
    int n = 0;
    int count = 0;
    while (*(src + n))
    {

        *(dest + n) = *(src + n);
        n++;
    }
    *(dest + n) = '\0';
}

int main()
{
    char source[] = "hello";
    char destination[20];
    myStrcpy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}