//Arduino electric guitar tuner, frequency detection with display
//Buni Roland István, Szabadi Tibor, Szabó Bence, Török Milán
//v1.0

//Importing header files
#include <LiquidCrystal.h>
#include "for_display.h"

//Creating variables
#define SOR 4
#define OSZLOP 20
#define PIN A0
int bekapcs,kikapcs;
float frek,periodus;

//Display instantiation
Display d;

//Initial settings
void setup()
{
  pinMode(PIN,INPUT); //A0 pin to input
  lcd.begin(OSZLOP, SOR); //Display's size
  d.startup(); //Initial display
  lcd.clear(); //Clear display

}

//Running Code
void loop()
{
   bekapcs = pulseIn(PIN,HIGH); //In microseconds, we get back the time until it goes from high to low
   kikapcs = pulseIn(PIN,LOW); //In microseconds, we get back the time until it goes from low to high
   periodus = bekapcs+kikapcs; //Period calculation
   frek = 1000000.0/periodus; //Frequency calculation
   
   if(periodus > 0){ //Real data
    d.frequency_selector(frek); //SPN selector and display
    lcd.setCursor(0,3); //Cursor to lower left corner
    lcd.print(frek); //Exact frequency display
   }
   
   delay(200); //Delay
   lcd.clear(); //Clear display
}
