#include <LiquidCrystal.h> 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
  


}

void loop() {
 int a=digitalRead(6);
 Serial.println(a);
  delay(100);
  if(a==0) { 
  
    digitalWrite(7,HIGH);
   
    lcd.print("donot touch ");
    lcd.setCursor(0,2);
    lcd.print("my phone");
   
    delay(1000);
    lcd.clear();
    
  }
  else{
  Serial.print('not found');
  digitalWrite(7,LOW);
   }
  
}

 


