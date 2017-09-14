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

/*
 * 
 */
void main ( ) { 
   
   while(1){
      output_high()
      delay_ms ( 500 );
      if (counter==9) 
         counter=0;
      else
         counter++;
   }
}
