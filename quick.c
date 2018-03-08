#include "wiring_private.h"
#include "pins_arduino.h"
void digitalWrite2(int pin, int on) {

  if (pin>7 && pin<=13)  
  {
    	if (on==1)
    	 PORTB = PORTB | (1<<(pin-8)); // устанавливаем состояние pin13 как HIGH //PORTB = PORTB || 0b10000000;
    	else
    	 PORTB = PORTB && (~1<<(pin-8)); // устанавливаем состояние pin13 как LOW  //(1<<8)//PORTB = PORTB && 0b01111111;
  }
  else
  
  if(pin>0 && pin<=7)
  {
    	if (on)
    	 PORTD = PORTD | (1<<pin); 
    	else
    	 PORTD = PORTD && (~1<<pin); 
    }

}
