#include <main.h>

#include <float.h>
#define LCD_ENABLE_PIN PIN_D2
#define LCD_RS_PIN PIN_D0
#define LCD_RW_PIN PIN_D1
#define LCD_DATA4 PIN_D3
#define LCD_DATA5 PIN_D4
#define LCD_DATA6 PIN_D5
#define LCD_DATA7 PIN_D6

#include <lcd.c>

void main()
{

   lcd_init();

	while(TRUE)
	{
		//TODO: User Code
	}

}
