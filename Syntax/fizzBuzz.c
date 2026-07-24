#include <stdio.h>

int main() {
    int x = 1;
    while (x <= 20)
    {
        if (x % 3 == 0 && x % 5 == 0) {
            printf("[fizzbuzz, %d]\n", x);
        }
        else if (x % 5 == 0) {
            printf("[buzz, %d]\n", x);
        }
        else if (x % 3 == 0) {
            printf("[fizz, %d]\n", x);
        }
        else {
            printf("[%d]\n", x);
        }
        x++;
    }
    return 0;
}