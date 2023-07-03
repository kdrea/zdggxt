#include "js.h"
#include "gpio.h"
#include "tim.h"
void js()
{
__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,12500);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET);
}


void stop()
{
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET);
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,GPIO_PIN_SET);
}