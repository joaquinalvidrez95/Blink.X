/* 
 * File:   main.c
 * Author: joaquinalan
 *
 * Created on 14 de septiembre de 2017, 11:40 AM
 */

#include <16F886.h>
#FUSES HS, PUT, NOLVP, PROTECT,NOMCLR, BROWNOUT
#use delay(clock=20M)

#use standard_io(c)

#include <blink.c>

#define LED PIN_A0
#define DELAY 300

/*
 * 
 */
void main() {

    while (TRUE) {
        blinkLed(LED);        
    }
}
