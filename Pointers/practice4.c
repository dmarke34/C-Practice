#include <stdio.h>
#include <stdint.h>

int main()
{
    int num;
    int count = 0;
    scanf("%d", &num);
    for (int i = 0; i < sizeof(num) * 8; i++)
    {
        if ((1 << i) & num)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

// Brian Kernighan's Algorithm
// #include <stdio.h>

// int main()
// {
//     int num, count = 0;
//     scanf("%d", &num);

//     while (num != 0) {
//         num = num & (num - 1);  // Remove rightmost set bit
//         count++;
//     }

//     printf("%d\n", count);
//     return 0;
// }