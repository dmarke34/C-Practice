#include <stdio.h>

int main()
{
    float temp, conversion;
    printf("Enter Temperature either in C or F: ");
    scanf("%f", &temp);
    printf("Press 1 for C to F Press 2 for F to C: ");
    scanf("%f", &conversion);
    if (conversion == 2)
    {
        float finalTempC = (temp - 32) * (5.0 / 9.0);
        printf("Final Temp in C: %f", finalTempC);
    }
    else if (conversion == 1)
    {

        float finalTempF = (temp * (9.0 / 5.0) + 32);
        printf("Final Temp in F: %f", finalTempF);
    }

    return 0;
}
