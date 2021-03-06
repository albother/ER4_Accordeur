/*
* Accordeur de Guitare
* Authors : METAYER Simon & BIZON Alexis
* Created Date : 23/01/17
* Version : 2.0
*/

#ifndef __DEFINE_H__
#define __DEFINE_H__
	
	//#include "sam.h"
	#include "adc.h"
    #include "dac.h"
	#include "eic.h"
	//#include "clock.h"
	#include "oled.h"
	#include "pinAccess.h"
	#include "pinMux.h"
	#include "redirectPrintf.h"
	#include "serial.h"
	#include "timer.h"
	#include <math.h>
	
	#include "display.h"
	#include "user_init.h"
	#include "note.h"
	#include "define_notes.h"
	#include "fftDescribe.h"
	#include "fft.h"
	#include "instruments.h"
	#include <stdlib.h>
	#include <stdio.h>
	
	#define LOW_FREQ	1 //La fréquence est trop basse
	#define OK_FREQ		2 //La fréquence est OK
	#define HIGH_FREQ	3 //La fréquence est trop haute

	#define POURCENT_TO_SCALAIRE /100 //Permet de convertir un nombre en % vers un nombre scalaire
	#define SCALAIRE_TO_POURCENT *100 //Permet de convertir un nombre en scalaire vers un nombre en %

	#define TRUE 1 //Vrai/Oui
	#define FALSE 0 //Faux/Non
	
	#define ADC_MIC 4
	
#endif
