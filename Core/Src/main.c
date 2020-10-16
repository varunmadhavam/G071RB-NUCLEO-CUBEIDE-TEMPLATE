#include "stm32g0xx.h"
#include "rcc.h"
#include "systick.h"
#include "delay.h"


int main(void)
{
  sysclock_config();//call the system clock configuration function. Clock should be set to 64Mhz now.
  systick_enable();//set the systick timer to interrupt every 1ms.


}

