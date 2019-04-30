/*
ECEN2270 motor speed control example
*/
// define pins
const int pinCW_Left = 7;
const int pinCC_Left = 8;
const int pinSpeed_Left = 9; // connect pin 9 to speed reference
const int pinCW_Right = 10;
const int pinCC_Right = 11;
const int pinSpeed_Right = 12;
const int LED = 13;
const int pinENC_Left = 5;
const int pinENC_Right = 5;
//define global vars
volatile int enc_left = 0;
volatile int enc_right = 0;

void leftenc()
{
  enc_left++;
}
void rightenc()
{
  enc_right++;
}
// setup pins and initial values
void setup() 
{ 
  pinMode(pinCW_Left,OUTPUT); 
  pinMode(pinCC_Left,OUTPUT); 
  pinMode(pinSpeed_Left,OUTPUT); 
  pinMode(pinCW_Right,OUTPUT); 
  pinMode(pinCC_Right,OUTPUT); 
  pinMode(pinSpeed_Right,OUTPUT); 
  pinMode(LED,OUTPUT); 
  digitalWrite(pinCW_Left,LOW); 
  digitalWrite(pinCC_Left,LOW); 
  digitalWrite(pinCW_Right,LOW); 
  digitalWrite(pinCC_Right,LOW); 
  analogWrite(pinSpeed_Left,70);
  analogWrite(pinSpeed_Right,70);

  attachInterrupt(digitalPinToInterrupt(pinENC_Left), leftenc, RISING);
  attachInterrupt(digitalPinToInterrupt(pinENC_Right), rightenc, RISING);
}
void loop() 
{
  //clockwise left wheel
  digitalWrite(pinCC_Left,LOW);
  digitalWrite(pinCW_Left,HIGH); 
  delay(1000); 
  digitalWrite(pinCC_Left,LOW);
  digitalWrite(pinCW_Left,LOW);
  delay(1000);
  //counterclockwise left wheel
  digitalWrite(pinCC_Left,HIGH);
  digitalWrite(pinCW_Left,LOW); 
  delay(1000); 
  digitalWrite(pinCC_Left,LOW);
  digitalWrite(pinCW_Left,LOW);
  delay(1000);
  //clockwise Right wheel
  digitalWrite(pinCC_Right,LOW);
  digitalWrite(pinCW_Right,HIGH); 
  delay(1000); 
  digitalWrite(pinCC_Right,LOW);
  digitalWrite(pinCW_Right,LOW);
  delay(1000);
  //counterclockwise Right wheel
  digitalWrite(pinCC_Right,HIGH);
  digitalWrite(pinCW_Right,LOW); 
  delay(1000); 
  digitalWrite(pinCC_Right,LOW);
  digitalWrite(pinCW_Right,LOW);
  delay(1000);
}
