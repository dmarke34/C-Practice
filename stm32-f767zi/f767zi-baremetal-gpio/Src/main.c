#include <stdint.h>

#define RCC_BASE        0x40023800UL
#define RCC_AHB1ENR     (*(volatile uint32_t *)(RCC_BASE + 0x30))

#define GPIOB_BASE      0x40020400UL
#define GPIOB_MODER     (*(volatile uint32_t *)(GPIOB_BASE + 0x00))
#define GPIOB_ODR       (*(volatile uint32_t *)(GPIOB_BASE + 0x14))

void delay(volatile uint32_t count)
{
    while (count--);
}

int main(void)
{
    RCC_AHB1ENR |= (1 << 1);

    GPIOB_MODER &= ~(0x3UL << 0);
    GPIOB_MODER |=  (0x1UL << 0);

    for (;;)
    {
        GPIOB_ODR ^= (1UL << 0);
        delay(1000000);
    }
}
