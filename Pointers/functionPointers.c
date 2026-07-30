#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int calculate(int (*op)(int, int), int a, int b)
{
    return op(a, b);
}

int main()
{
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};
    char *names[4] = {"add", "subtract", "multiply", "divide"};

    int x = 10, y = 3;
    int i = 0;

    while (i < 4)
    {
        printf("%s(%d, %d) = %d\n", names[i], x, y, calculate(operations[i], x, y));
        i++;
    }

    return 0;
}