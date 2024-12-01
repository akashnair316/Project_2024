#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PB7  // Built-in LED on pin 13 is PB7

int main(void) {
    // Set the LED pin as an output
    DDRB |= (1 << LED_PIN);

    while (1) {
        // Turn the LED on
        PORTB |= (1 << LED_PIN);
        _delay_ms(50000);

        // Turn the LED off
        PORTB &= ~(1 << LED_PIN);
        _delay_ms(50000);
    }

    return 0; // This return won't actually execute in a microcontroller loop
}

