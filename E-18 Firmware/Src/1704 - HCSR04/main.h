#include <16F1704.h>

#FUSES NOWDT                   //No Watch Dog Timer
#FUSES PROTECT                 //Code protected from reads
#FUSES NOBROWNOUT              //No brownout reset
#FUSES NOLVP                   //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES PLLEN

#use delay(internal=32Mhz)

// The maximum time to wait for a trigger response before timing out (this is waiting for distance pulse width to go high)
#DEFINE HC_TIMEOUT_HIGH 400

// The maximum time to wait for a ping response before timing out (this is waiting for the distance pulse width to go low)
#DEFINE HC_TIMEOUT_LOW 20000

#DEFINE PORT_ECHO    pin_c5
#DEFINE PORT_TRIGGER pin_c4

#DEFINE PORT_LED pin_c3

#DEFINE PORT_UNIVERSAL pin_a2

#use fast_io(all)
