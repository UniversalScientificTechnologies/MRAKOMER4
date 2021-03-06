#include <16F88.h>
#device adc=8

#FUSES NOWDT                 	//Watch Dog Timer
#FUSES INTRC              	//Internal RC Osc, no CLKOUT
//#FUSES INTRC
//#FUSES XT
#FUSES PUT                 	//Power Up Timer
//#FUSES NOMCLR                	//Master Clear pin used for I/O
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOCPD                 	//No EE protection
#FUSES NOWRT                 	//Program memory not write protected
#FUSES NODEBUG               	//No Debug mode for ICD
#FUSES NOPROTECT             	//Code not protected from reading
#FUSES NOFCMEN               	//Fail-safe clock monitor disabled


#use delay(clock=4000000)
#use rs232(baud=2400,parity=N,xmit=PIN_B5,rcv=PIN_B2,bits=8)//,FORCE_HW)


