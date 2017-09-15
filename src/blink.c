
void blinkLed(int ledPin) {
    output_high(ledPin);
    delay_ms(500);
    output_low(ledPin);
    delay_ms(200);
}

