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

    int *newArr = realloc(arr, (n + 5) * sizeof(int));

    if (newArr == NULL)
    {
        free(arr); // realloc failed, arr is still valid — clean it up
        return 0;
    }

    int x = n;
    while (x < n + 5)
    {
        scanf("%d", (newArr + x));
        x++;
    }

    printf("Array: ");
    int y = 0;
    while (y < n + 5)
    {
        printf("%d, ", *(newArr + y));
        y++;
    }

    free(newArr);

    return 0;
}