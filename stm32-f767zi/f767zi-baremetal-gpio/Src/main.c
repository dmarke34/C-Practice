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
    uint32_t leds[3] = {0, 7, 14};

    RCC_AHB1ENR |= (1 << 1);

    for (uint32_t i = 0; i < 3; i++)
    {
        GPIOB_MODER &= ~(0x3UL << (leds[i] * 2));
        GPIOB_MODER |=  (0x1UL << (leds[i] * 2));
    }

    for (;;)
    {
        for (uint32_t i = 0; i < 3; i++)
        {
            GPIOB_ODR &= ~((1UL << 0) | (1UL << 7) | (1UL << 14));
            GPIOB_ODR |= (1UL << leds[i]);
            delay(2000000);
        }
    }
}
