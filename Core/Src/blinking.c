#include "main.h"
#include "blinking.h"


void blinking()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET); // LED ON (Active Low)
    HAL_Delay(500);                                         // Delay 500ms

    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);   // LED OFF
    HAL_Delay(500);
}

