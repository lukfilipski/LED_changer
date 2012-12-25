#include <avr/io.h>
#define RED PB4
#define GREEN PB3
#define BLUE PB0
#define output_low(port,pin) port &= ~(1<<pin)
#define output_high(port,pin) port |= (1<<pin)
#define set_input(portdir,pin) portdir &= ~(1<<pin)
#define set_output(portdir,pin) portdir |= (1<<pin)

void delay_ms(uint8_t ms) {
  uint16_t delay_count = F_CPU / 17500;
	volatile uint16_t i;
	
	while (ms != 0) {
		for (i=0; i != delay_count; i++);
		ms--;
	}
}

//int color;
//int time;

int main(void) {
	set_output(DDRB, GREEN);
	set_output(DDRB, RED);
	
/*void blink(color, time)
	{
	output_high(PORTB, color);
	delay_ms(time);
	output_low(PORTB, color);
	delay_ms(time);
	}
	*/
	while (1) {
		output_high(PORTB, RED);
		delay_ms(100);
		output_low(PORTB, RED);
		delay_ms(0);
		output_high(PORTB, GREEN);
		delay_ms(20);
		output_low(PORTB, GREEN);
		delay_ms(0);
		output_high(PORTB, RED);
		delay_ms(20);
		output_low(PORTB, RED);
		delay_ms(0);
		output_high(PORTB, GREEN);
		delay_ms(100);
		output_low(PORTB, GREEN);
		delay_ms(0);
		output_high(PORTB, BLUE);
		delay_ms(20);
		output_low(PORTB, BLUE);
		delay_ms(0);
		output_high(PORTB, GREEN);
		delay_ms(20);
		output_low(PORTB, GREEN);
		delay_ms(0);
		output_high(PORTB, BLUE);
		delay_ms(100);
		output_low(PORTB, BLUE);
		delay_ms(0);
		output_high(PORTB, RED);
		delay_ms(20);
		output_low(PORTB, RED);
		delay_ms(0);
		output_high(PORTB, BLUE);
		delay_ms(20);
		output_low(PORTB, BLUE);
		delay_ms(0);
		output_high(PORTB, GREEN);
		output_high(PORTB, RED);
		delay_ms(10);
		output_low(PORTB, GREEN);
		delay_ms(10);
		output_high(PORTB, GREEN);
		output_low(PORTB, RED);
		delay_ms(10);
		}
}
