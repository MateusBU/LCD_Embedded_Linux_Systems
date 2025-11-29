#include <wiringPi.h>
#include <lcd.h>
#include <stdio.h>

//Pin numbers below are the WiringPi pin numbers
#define LCD_RS 26 //Resgister select pin
#define LCD_E 19 //Enable pin
#define LCD_D4 13 //Data pin 4
#define LCD_D5 6 //Data pin 5
#define LCD_D6 5 //Data pin 6
#define LCD_D7 21 //Data pin 7

int main() {

    int lcd;
    wiringPiSetupGpio();

    //Initialise LCD(Int rows, int cols, int bits, int rs, int enable, int d0, int d1, int d2, int d3)
    if(lcd = cdInit(2, 16, 4, LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7, 0, 0, 0, 0))
    {
        printf("lcdInit failed! \n");
        return -1;
    }

    lcdPosition(lcd, 0, 0);
    lcdPuts(lcd, "Character LCD");
    getchar();
    lcdClear(lcd);
}