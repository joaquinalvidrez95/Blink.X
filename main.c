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

#define LED PIN_A0
#define DELAY 500
/*
 * 
 */
void main ( ) { 
   
   while(1){
      output_high(LED);
      delay_ms ( DELAY );
      output_high(LED);      
      delay_ms ( DELAY );      
   }
}
