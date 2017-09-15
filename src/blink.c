
void blinkLed(int8 ledPin, int8 delay) {
    output_high(ledPin);
    delay_ms(delay);
    output_low(ledPin);
    delay_ms(delay);
}

