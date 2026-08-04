#include <stdio.h>

unsigned char setBit(unsigned char value, int n)
{
    return value |= (1 << n);
}

unsigned char clearBit(unsigned char value, int n)
{
    return value &= ~(1 << n);
}

unsigned char toggleBit(unsigned char value, int n)
{
    return value ^= (1 << n);
}

int checkBit(unsigned char value, int n)
{
    return (value >> n) & 1;
}

void printBinary(unsigned char value)
{
    int n = 7;
    while (n >= 0)
    {
        printf("%d", (value >> n) & 1);
        n--;
    }
    printf("\n");
}

int main()
{
    unsigned char reg = 0;

    printf("Initial:      ");
    printBinary(reg);

    reg = setBit(reg, 3);
    printf("Set bit 3:    ");
    printBinary(reg);

    reg = setBit(reg, 0);
    printf("Set bit 0:    ");
    printBinary(reg);

    reg = toggleBit(reg, 3);
    printf("Toggle bit 3: ");
    printBinary(reg);

    printf("Check bit 0:  %d\n", checkBit(reg, 0));

    reg = clearBit(reg, 0);
    printf("Clear bit 0:  ");
    printBinary(reg);

    return 0;
}