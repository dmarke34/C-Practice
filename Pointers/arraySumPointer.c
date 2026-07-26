#include <stdio.h>

int sumArray(int *arr, int size)
{
    int sum = 0;
    int n = 0;
    while (n < size)
    {
        sum += *(arr + n);
        n++;
    }
    return sum;
}

int main()
{

    int nums[5] = {1, 2, 3, 4, 5};
    int total = sumArray(nums, 5);
    printf("Sum: %d\n", total);
    return 0;
}