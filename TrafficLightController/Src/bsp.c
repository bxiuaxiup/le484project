#include "bsp.h"
#include "timer.h"
#include "main.h"
#include <stdio.h>
// exported global variables
volatile int Button_Status = 0;
Light_t Light = RED;

/** @brief  Initialize I/O for lamps
    @retval None
*/
void BSP_Init(void)
{
}

/** @brief  Change lamps to GREEN
    @retval None
*/
void Signal_Pass(void) //Car Pass
{
  WALK_OFF();	Delay(15);	WALK_ON();	Delay(15);
	WALK_OFF();	Delay(15);	WALK_ON();	Delay(15);
	WALK_OFF();	Delay(15);	WALK_ON();	Delay(15);
  WALK_OFF();
	DWALK_ON();
	Delay(5);
	RED_OFF();
	Delay(5);
	GREEN_ON();
	Light = GREEN;
}

/** @brief  Change lamps to RED
    @retval None
*/
void Signal_Block(void)
{
  GREEN_OFF();   //0.5s
	Delay(5);
	YELLOW_ON(); //0.5s
	Delay(5);
	YELLOW_OFF(); //0.5s
	Delay(5);
	RED_ON(); //0.5s
	Delay(5);
	DWALK_OFF();
	Delay(5);
	WALK_ON();
	Light = RED;
}

/** @brief  Flash YELLOW lamp
    @retval None
*/
void Signal_Flash(void)
{
	RED_OFF();
	GREEN_OFF();
	WALK_OFF();

	YELLOW_OFF();
	DWALK_OFF();
	Delay(5); //0.5s
	YELLOW_ON();
	DWALK_ON();
	Delay(10); //1.0s
	
}