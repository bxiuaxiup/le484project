#ifndef __BSP_H
#define __BSP_H

#ifdef __cplusplus
extern "C" {
#endif


#define SWITCH_1()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_3) == SET)
#define SWITCH_2()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == SET)
#define SWITCH_3()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_5) == SET)
#define SWITCH_4()     (HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_6) == SET)


#ifdef __cplusplus
}
#endif

#endif /* __BSP_H */