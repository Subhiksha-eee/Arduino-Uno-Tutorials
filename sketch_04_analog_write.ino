// LED Brightness Control using analogWrite (PWM)
// Pin 10 is a PWM pin (~) on Arduino Uno
// PWM values: 0 = OFF, 255 = Full Brightness
//tinker cad link-https://www.tinkercad.com/things/hsBQwE3A1pK-analogwrite

// Storing  brightness values in variables
int num  = 255;  
int num1 = 125; 
int num2 = 0;    
void setup()
{
  pinMode(10, OUTPUT);  // Set pin 10 as output (PWM pin ~)
}

void loop()
{
 
  analogWrite(10, num);   
  delay(1000);           

  
  analogWrite(10, num1);  
  delay(1000);           

  
  analogWrite(10, num2);  
  delay(1000);            


}
