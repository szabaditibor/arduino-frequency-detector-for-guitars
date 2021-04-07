#include <LiquidCrystal.h>
#define SOR 4
#define OSZLOP 20

LiquidCrystal lcd(1,2,4,5,6,7);

class Display{

public:

void startup(){
  for(int i = 0; i < OSZLOP ; i++){
    horizontal_line(i,0);
    horizontal_line(i,3);
  }
  for(int j = 0; j < SOR ; j++){
    vertical_line(0,j);
    vertical_line(19,j);
  }

  lcd.setCursor(4,1);
  lcd.print("Booting up...");
  for(int i = 3; i >=1; i--){
    lcd.setCursor(9,2);
    lcd.print(String(i) + " ...");
    delay(1000);
  }
}

void letter_D(){
  
  byte first[] = {
    B11110,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };
  byte second[] = {
    B11100,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010
  };
  byte third[] = {
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };byte fourth[] = {
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B11100
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
  }

void letter_C(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };
  byte second[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
  };
  byte third[] = {
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };byte fourth[] = {
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11100
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void letter_E(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };
  byte second[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11100
  };
  byte third[] = {
    B11100,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };byte fourth[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11100
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void letter_F(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };
  byte second[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11100
  };
  byte third[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };byte fourth[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void letter_G(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };
  byte second[] = {
    B11100,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
  };
  byte third[] = {
    B10000,
    B10000,
    B10011,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };byte fourth[] = {
    B00000,
    B00000,
    B11100,
    B00100,
    B00100,
    B00100,
    B00100,
    B11100
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void letter_A(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };
  byte second[] = {
    B11111,
    B00001,
    B00001,
    B00001,
    B00001,
    B00001,
    B00001,
    B00001
  };
  byte third[] = {
    B10000,
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };byte fourth[] = {
    B00001,
    B11111,
    B00001,
    B00001,
    B00001,
    B00001,
    B00001,
    B00001
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void letter_B(){
  
  byte first[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000
  };
  byte second[] = {
    B11100,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010
  };
  byte third[] = {
    B11111,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B11111
  };byte fourth[] = {
    B11110,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B11110
  };
  
  lcd.createChar(1, first);
  lcd.createChar(2,second);
  lcd.createChar(3,third);
  lcd.createChar(4,fourth);
  
  lcd.setCursor(9,1);
  lcd.write(1);
  
  lcd.setCursor(10,1);
  lcd.write(2);
  
  
  lcd.setCursor(9,2);
  lcd.write(3);
  
  
  lcd.setCursor(10,2);
  lcd.write(4);
  
}

void number_zero(){

  byte num[] ={
  B11111,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B10001,
  B11111
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}


void number_one(){

  byte num[] ={
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}

void number_two(){

  byte num[] ={
  B11111,
  B00001,
  B00001,
  B00001,
  B11111,
  B10000,
  B10000,
  B11111
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}

void number_three(){

  byte num[] ={
  B11111,
  B00001,
  B00001,
  B00001,
  B11111,
  B00001,
  B00001,
  B11111
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}
void number_four(){

  byte num[] ={
  B10001,
  B10001,
  B10001,
  B10001,
  B11111,
  B00001,
  B00001,
  B00001
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}

void number_five(){

  byte num[] ={
  B11111,
  B10000,
  B10000,
  B10000,
  B11111,
  B00001,
  B00001,
  B11111
};

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}

void number_six(){

  byte num[] ={
  B11111,
  B10000,
  B10000,
  B10000,
  B10111,
  B10001,
  B10001,
  B11111
};;

  lcd.createChar(5,num);
  
  lcd.setCursor(11,2);
  lcd.write(5);
  
}

void signal_plus(){
  byte plus[] = {
  B00000,
  B00100,
  B00100,
  B11111,
  B00100,
  B00100,
  B00000,
  B00000
};

  lcd.createChar(6,plus);
  
  lcd.setCursor(11,1);
  lcd.write(6);

}

void signal_minus(){
  byte minus[] = {
  B00000,
  B00000,
  B00000,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000
};

  lcd.createChar(6,minus);
  
  lcd.setCursor(11,1);
  lcd.write(6);

}

void horizontal_line(int i, int j){
  byte line1[] = {
  B00000,
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

  byte line2[] = {
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000,
    B11111,
    B00000
  };

  if(j == 0){
    lcd.createChar(1,line1);
    
    lcd.setCursor(i,0);
    lcd.write(1);
  }else if(j == 3){
    lcd.createChar(2,line2);
    
    lcd.setCursor(i,3);
    lcd.write(2);
  }

}

void vertical_line(int i, int j){
  byte line1[] = {
  B01000,
  B01000,
  B01000,
  B01000,
  B01000,
  B01000,
  B01000,
  B01000
};

  byte line2[] = {
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010,
    B00010
  };

  if(i == 0){
    lcd.createChar(3,line1);
    
    lcd.setCursor(0,j);
    lcd.write(3);
  }else if(i == 19){
    lcd.createChar(4,line2);
    
    lcd.setCursor(19,j);
    lcd.write(4);
  }

}





// Frequency selector and display
void frequency_selector(float frek){

lcd.clear();
  
  //C0
  if(frek > 14 && frek < 17.75){
    
    
    if(frek < 16){
      letter_C();
      number_zero();
      signal_minus();
    }else if(frek >17){
      letter_C();
      number_zero();
      signal_plus();
    }else{
      letter_C();
      number_zero();
    }
    
  }

  //D0
  if(frek > 17.75 && frek < 20){
    

    if(frek < 18.3){
      letter_G();
      number_zero();
      signal_minus();
    }else if(frek > 19){
      letter_G();
      number_zero();
      signal_plus();
    }else{
      letter_G();
      number_zero();
    }
  }

  //E0
  if(frek > 20 && frek > 21.5){
    

    if(frek < 20.2){
      letter_E();
      number_zero();
      signal_minus();
    }else if (frek > 21){
      letter_E();
      number_zero();
      signal_plus();
    }else{
      letter_E();
      number_zero();
    }
  }

  //F0
  if(frek > 21.5 && frek < 23){
    

    if(frek < 21.6){
      letter_F();
      number_zero();
      signal_minus();
    }else if(frek > 22.5){
      letter_F();
      number_zero();
      signal_plus();
    }else{
      letter_F();
      number_zero();
    }
  }

  //G0
  if(frek > 23 && frek < 27){
    

    if(frek < 24.4){
      letter_G();
      number_zero();
      signal_minus();
    }else if(frek > 25){
      letter_G();
      number_zero();
      signal_plus();
    }else{
      letter_G();
      number_zero();
    }
  }

  //A0
  if(frek > 27 && frek < 30){
    

    if(frek < 27.4){
      letter_A();
      number_zero();
      signal_minus();
    }else if(frek > 28){
      letter_A();
      number_zero();
      signal_plus();
    }else{
      letter_A();
      number_zero();
    }
  }

  //B0
  if(frek > 30 && frek < 32.2){
    

    if(frek < 30.6){
      letter_B();
      number_zero();
      signal_minus();
    }else if(frek > 31.2){
      letter_B();
      number_zero();
      signal_plus();
    }else{
      letter_B();
      number_zero();
    }
  }

  //C1
  if(frek > 32.2 && frek < 35.5){
    

    if(frek < 32.5){
      letter_C();
      number_one();
      signal_minus();
    }else if (frek > 33){
      letter_C();
      number_one();
      signal_plus();
    }else{
      letter_C();
      number_one();
    }

  }

  //D1
  if(frek > 35.5 && frek < 39){
    

    if(frek < 36){
      letter_D();
      number_one();
      signal_minus();
    }else if(frek > 37.1){
      letter_D();
      number_one();
      signal_plus();
    }else{
      letter_D();
      number_one();
    }
  }

  //E1
  if(frek > 39 && frek < 42){
    

    if(frek < 40.5){
      letter_E();
      number_one();
      signal_minus();
    }else if (frek > 41.7){
      letter_E();
      number_one();
      signal_plus();
    }else {
      letter_E();
      number_one();
    }
  }

  //F1
  if(frek > 42 && frek < 46){
    

    if(frek < 43){
      letter_F();
      number_one();
      signal_minus();
    }else if(frek > 44){
      letter_F();
      number_one();
      signal_plus();
    }else{
      letter_F();
      number_one();
    }
  }

  //G1
  if(frek > 46 && frek < 53){
    

    if(frek < 48){
      letter_G();
      number_one();
      signal_minus();
    }else if (frek > 50){
      letter_G();
      number_one();
      signal_plus();
    }else{
      letter_G();
      number_one();
    }
  }

  //A1
  if(frek > 53 && frek < 58){
    

    if(frek < 54){
      letter_A();
      number_one();
      signal_minus();
    }else if(frek > 56){
      letter_A();
      number_one();
      signal_plus();
    }else{
      letter_A();
      number_one();
    }
  }

  //B1
  if(frek > 58 && frek < 63){
    

    if(frek < 60){
      letter_B();
      number_one();
      signal_minus();
    }else if(frek > 62.3){
      letter_B();
      number_one();
      signal_plus();
    }else{
      letter_B();
      number_one();
    }
  }

  //C2
  if(frek > 63 && frek < 69){
    

    if(frek < 65){
      letter_C();
      number_two();
      signal_minus();
    }else if(frek > 66){
      letter_C();
      number_two();
      signal_plus();
    }else{
      letter_C();
      number_two();
    }
  }

  //D2
  if(frek > 69 && frek < 77){
    

    if(frek < 73){
      letter_D();
      number_two();
      signal_minus();
    }else if(frek > 73.9){
      letter_D();
      number_two();
      signal_plus();
    }else{
      letter_D();
      number_two();
    }
  }

  //E2
  if(frek > 77 && frek < 85.5){
    

    if(frek < 81.5){
      letter_E();
      number_two();
      signal_minus();
    }else if(frek > 83){
      letter_E();
      number_two();
      signal_plus();
    }else{
      letter_E();
      number_two();
    }
  }

  //F2
  if(frek > 85.5 && frek <92.5){
    

    if(frek < 86.5){
      letter_F();
      number_two();
      signal_minus();
    }else if (frek > 89.5){
      letter_F();
      number_two();
      signal_plus();
    }else{
      letter_F();
      number_two();
    }
  }

  //G2
  if(frek > 92.5 && frek <104){
    

    if(frek < 95){
      letter_G();
      number_two();
      signal_minus();
    }else if (frek > 101){
      letter_G();
      number_two();
      signal_plus();
    }else{
      letter_G();
      number_two();
    }
  }

  //A2
  if(frek > 104 && frek < 117){
    

    if(frek < 107){
      letter_A();
      number_two();
      signal_minus();
    }else if(frek > 114){
      letter_A();
      number_two();
      signal_plus();
    }else{
      letter_A();
      number_two();
    }
  }

  //B2
  if(frek > 117 && frek <126){
    

    if(frek < 121){
      letter_B();
      number_two();
      signal_minus();
    }else if(frek > 124){
      letter_B();
      number_two();
      signal_plus();
    }else{
      letter_B();
      number_two();
    }
  }

  //C3
  if(frek > 126 && frek < 139){
    

    if(frek < 128){
      letter_C();
      number_three();
      signal_minus();
    }else if(frek > 134.5){
      letter_C();
      number_three();
      signal_plus();
    }else{
      letter_C();
      number_three();
    }
  }

  //D3
  if(frek > 139 && frek < 155){
    

    if(frek < 146.3){
      letter_D();
      number_three();
      signal_minus();
    }else if(frek > 147.3){
      letter_D();
      number_three();
      signal_plus();
    }else{
      letter_D();
      number_three();
    }
  }

  //E3
  if(frek > 155 && frek < 169){
    

    if(frek < 164.3){
      letter_E();
      number_three();
      signal_minus();
    }else if(frek > 165.3){
      letter_E();
      number_three();
      signal_plus();
    }else{
      letter_E();
      number_three();
    }
  }

  //F3
  if(frek > 169 && frek < 185){
    

    if(frek < 174.1){
      letter_F();
      number_three();
      signal_minus();
    }else if(frek > 175.1){
      letter_F();
      number_three();
      signal_plus();
    }else{
      letter_F();
      number_three();
    }
  }

  //G3
  if(frek > 185 && frek < 210){
    

    if(frek < 195.5){
      letter_G();
      number_three();
      signal_minus();
    }else if(frek > 196.5){
      letter_G();
      number_three();
      signal_plus();
    }else{
      letter_G();
      number_three();
    }
  }

  //A3
  if(frek > 210 && frek < 236){
    

    if(frek < 219.5){
      letter_A();
      number_three();
      signal_minus();
    }else if(frek > 220.5){
      letter_A();
      number_three();
      signal_plus();
    }else{
      letter_A();
      number_three();
    }
  }

  //B3
  if(frek > 236 && frek < 255){
    

    if(frek < 246.4){
      letter_B();
      number_three();
      signal_minus();
    }else if(frek > 247.4){
      letter_B();
      number_three();
      signal_plus();
    }else{
      letter_B();
      number_three();
    }
  }

  //C4
  if(frek > 255 && frek < 284){
    

    if(frek < 259.8){
      letter_C();
      number_four();
      signal_minus();
    }else if(frek > 261.8){
      letter_C();
      number_four();
      signal_plus();
    }else{
      letter_C();
      number_four();
    }
  }

  //D4
  if(frek > 284 && frek < 320){
    

    if(frek < 293.1){
      letter_D();
      number_four();
      signal_minus();
    }else if(frek > 294.1){
      letter_D();
      number_four();
      signal_plus();
    }else{
      letter_D();
      number_four();
    }
  }

  //E4
  if(frek > 320 && frek < 340){
    

    if(frek < 329.1){
      letter_E();
      number_four();
      signal_minus();
    }else if(frek > 330.1){
      letter_E();
      number_four();
      signal_plus();
    }else{
      letter_E();
      number_four();
    }
  }

  //F4
  if(frek > 340 && frek < 375){
    

    if(frek < 343){
      letter_F();
      number_four();
      signal_minus();
    }else if(frek > 360){
      letter_F();
      number_four();
      signal_plus();
    }else{
      letter_F();
      number_four();
    }
  }

  //G4
  if(frek > 375 && frek < 420){
    

    if(frek < 385){
      letter_G();
      number_four();
      signal_minus();
    }else if(frek > 405){
      letter_G();
      number_four();
      signal_plus();
    }else{
      letter_G();
      number_four();
    }
  }

  //A4
  if(frek > 420 && frek < 470){
    

    if(frek < 435){
      letter_A();
      number_four();
      signal_minus();
    }else if(frek > 455){
      letter_A();
      number_four();
      signal_plus();
    }else{
      letter_A();
      number_four();
    }
  }

  //B4
  if(frek > 470 && frek < 510){
    

    if(frek < 485){
      letter_B();
      number_four();
      signal_minus();
    }else if(frek > 500){
      letter_B();
      number_four();
      signal_plus();
    }else{
      letter_B();
      number_four();
    }
  }

  //C5
  if(frek > 510 && frek < 560){
    

    if(frek < 517){
      letter_C();
      number_five();
      signal_minus();
    }else if(frek > 545){
      letter_C();
      number_five();
      signal_plus();
    }else{
      letter_C();
      number_five();
    }
  }

  //D5
  if(frek > 560 && frek < 630){
    

    if(frek < 580){
      letter_D();
      number_five();
      signal_minus();
    }else if(frek > 610){
      letter_D();
      number_five();
      signal_plus();
    }else{
      letter_D();
      number_five();
    }
  }

  //E5
  if(frek > 630 && frek < 670){
    

    if(frek < 645){
      letter_E();
      number_five();
      signal_minus();
    }else if (frek > 660){
      letter_E();
      number_five();
    }
  }

  //F5
  if(frek > 670 && 730){
    

    if(frek < 685){
      letter_F();
      number_five();
      signal_minus();
    }else if (frek > 715){
      letter_F();
      number_five();
      signal_plus();
    }else{
      letter_F();
      number_five();
    }
  }

  //G5
  if(frek > 730 && frek < 830){
    

    if(frek < 760){
      letter_G();
      number_five();
      signal_minus();
    }else if(frek > 810){
      letter_G();
      number_five();
      signal_plus();
    }else{
      letter_G();
      number_five();
    }
  }

  //A5
  if(frek > 830 && frek < 940){
    

    if(frek < 860){
      letter_A();
      number_five();
      signal_minus();
    }else if(frek > 910){
      letter_A();
      number_five();
      signal_plus();
    }else{
      letter_A();
      number_five();
    }
  }

  //B5
  if(frek > 940 && frek < 1020){
    

    if(frek < 970){
      letter_B();
      number_five();
      signal_minus();
    }else if(frek > 1000){
      letter_B();
      number_five();
      signal_plus();
    }else{
      letter_B();
      number_five();
    }
  }

  //C6
  if(frek > 1020 && frek < 1130){
    

    if(frek < 1035){
      letter_C();
      number_six();
      signal_minus();
    }else if(frek > 1070){
      letter_C();
      number_six();
      signal_plus();
    }else{
      letter_C();
      number_six();
    }
  }

  //D6
  if(frek > 1130 && frek < 1270){
    

    if(frek < 1150){
      letter_D();
      number_six();
      signal_minus();
    }else if(frek > 1230){
      letter_D();
      number_six();
      signal_plus();
    }else{
      letter_D();
      number_six();
    }
  }

  //E6
  if(frek > 1270 && frek < 1370){
    

    if(frek < 1300){
      letter_E();
      number_six();
      signal_minus();
    }else if (frek > 1360){
      letter_E();
      number_six();
      signal_plus();
    }else{
      letter_E();
      number_six();
    }
  }

  //F6
  if(frek > 1370 && frek < 1520){
    

    if(frek < 1380){
      letter_F();
      number_six();
      signal_minus();
    }else if(frek > 1500){
      letter_F();
      number_six();
      signal_plus();
    }else{
      letter_F();
      number_six();
    }
  }

  //G6
  if(frek > 1520 && frek < 1700){
    

    if(frek < 1540){
      letter_G();
      number_six();
      signal_minus();
    }else if(frek > 1650){
      letter_G();
      number_six();
      signal_plus();
    }else{
      letter_G();
      number_six();
    }
  }

  //A6
  if(frek > 1700 && frek < 1900){
    

    if(frek < 1740){
      letter_A();
      number_six();
      signal_minus();
    }else if(frek > 1830){
      letter_A();
      number_six();
      signal_plus();
    }else{
      letter_A();
      number_six();
    }
  }

  //B6
  if(frek > 1900 && frek < 2050){
    

    if(frek< 1940){
      letter_B();
      number_six();
      signal_minus();
    }else if(frek > 2020){
      letter_B();
      number_six();
      signal_plus();
    }else{
      letter_B();
      number_six();
    }
  }
  
}  
};
