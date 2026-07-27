#include <stdio.h>
#include <stdlib.h> // needed for malloc/free

int main()
{
    int n;
    printf("How many integers? ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        return 0;
    }

    int i = 0;
    while (i < n)
    {
        scanf("%d", (arr + i));
        i++;
    }

    printf("Array: ");
    int j = 0;
    while (j < n)
    {
        printf("%d, ", *(arr + j));
        j++;
    }

    free(arr);

    return 0;
}