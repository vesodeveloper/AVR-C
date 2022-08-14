#include <avr/io.h>
#include <util/delay.h>
int main(void){
DDRB |= (1<<PB0); //PB0 OUTPUT
while(1){
	
PORTB=0b00000001; //light on

_delay_ms(1000); //delay

PORTB=0b00000000; //light off

_delay_ms(1000); //delay

}
	}

