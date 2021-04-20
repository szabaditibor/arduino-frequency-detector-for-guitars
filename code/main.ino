//Arduino elektromos gitár hangoló, frekvencia érzékelő kijelzővel
//Buni Roland István, Szabadi Tibor, Szabó Bence, Török Milán
//v1.0

//Header fájlok importálása
#include <LiquidCrystal.h>
#include "for_display.h"

//Változók létrehozása
#define SOR 4
#define OSZLOP 20
#define PIN A0
int bekapcs,kikapcs;
float frek,periodus;

//Display példányosítása
Display d;

//Kezdeti beállítások
void setup()
{
  pinMode(PIN,INPUT); //A0 pin beállítása inputra
  lcd.begin(OSZLOP, SOR); //Kijelző mérete
  d.startup(); //Kezdeti kijelző
  lcd.clear(); //Kijelző törlése

}

//Futó programkód
void loop()
{
   bekapcs = pulseIn(PIN,HIGH); //Mikroszekundunban visszakapjuk az időt amíg magasról alacsonyra megy
   kikapcs = pulseIn(PIN,LOW); //Mikroszekundunban visszakapjuk az időt amíg alacsonyról magasra megy
   periodus = bekapcs+kikapcs; //Periódus kiszámítása
   frek = 1000000.0/periodus; //Frekvencia kiszámítása
   
   if(periodus > 0){ //Valós adat
    d.frequency_selector(frek); //Hang kiválasztó, és kiírató
    lcd.setCursor(0,3); //Kurzor bal alsó sarokba áttétel
    lcd.print(frek); //Pontos frekvencia kiíratása
   }
   
   delay(200); //Késleltető
   lcd.clear(); //Kijelző törlése
}
