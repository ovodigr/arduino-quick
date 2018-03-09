#include "wiring_private.h"
#include "pins_arduino.h"

void digitalWrite2(int pin, int on) {

  if (pin>7 && pin<=13)  
  {
		if (on==1)
			PORTB = PORTB | (1<<(pin-8)); // устанавливаем состояние pin13 как HIGH 
		else
			PORTB = PORTB & ~(1<<(pin-8)); // устанавливаем состояние pin13 как LOW  
  }
  else
  
  if(pin>0 && pin<=7)
  {
		if (on)
			PORTD = PORTD | (1<<pin); 
		else
			PORTD = PORTD & ~(1<<pin); 
  }
}

int digitalRead2(int pin) {

	int status=0;

  if (pin>7 && pin<=13)
  	status = PORTB >> (pin-8);
  else
  if (pin>0 && pin<=7)
  	status = PORTD >> pin;
 	
  
   	 if (status>=1) return pin;
	return pin;
}





