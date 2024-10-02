int LED1=D0;
int LED2=D4;
int LED3=D2;
int LED4=D3;
int touch1=D5;
int touch2=D6;
int touch3=D7;
int touch4=D8;
int buzzer=D1;

int count1=0;
int count2=0;
int count3=0;
int count4=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(touch1,INPUT);
pinMode(LED1,OUTPUT);
pinMode(touch2,INPUT);
pinMode(LED2,OUTPUT);
pinMode(touch3,INPUT);
pinMode(LED3,OUTPUT);
pinMode(touch4,INPUT);
pinMode(LED4,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
digitalWrite(LED1,LOW);
digitalWrite(buzzer,LOW);
//digitalWrite(LED,HIGH);
//delay(1000)
digitalWrite(LED2,LOW);
digitalWrite(LED3,LOW);
digitalWrite(LED4,LOW);
int touch_state1=digitalRead(touch1);
int touch_state2=digitalRead(touch2);
int touch_state3=digitalRead(touch3);
int touch_state4=digitalRead(touch4);

//Serial.println("Value 1");
//Serial.print(touch_state1);
//Serial.print("\n");
//Serial.println("Value 2");
//Serial.print(touch_state2);
//Serial.print("\n");
//Serial.println("Value 3");
//Serial.print(touch_state3);
//Serial.print("\n");
//Serial.println("Value 4");
//Serial.print(touch_state4);
//Serial.print("\n");




if(touch_state1==1)
{
  digitalWrite(LED1,HIGH);
digitalWrite(buzzer,HIGH);
//digitalWrite(LED,HIGH);
//delay(1000)
  count1++;
  Serial.println("\ncandidate 1: " + String(count1) + " candidate 2: " + String(count2) + " candidate 3: " + String(count3) + " candidate 4: " + String(count4));

  delay(5000);
}
else if(touch_state2==1)
{
  digitalWrite(LED2,HIGH);
  digitalWrite(buzzer,HIGH);
  count2++;
 Serial.println("\ncandidate 1: " + String(count1) + " candidate 2: " + String(count2) + " candidate 3: " + String(count3) + " candidate 4: " + String(count4));


  delay(5000);
  
//digitalWrite(LED,HIGH);
//delay(1000)
}
else if(touch_state3==1)
{
  digitalWrite(LED3,HIGH);
  digitalWrite(buzzer,HIGH);
//digitalWrite(LED,HIGH);
//delay(1000)
count3++;
Serial.println("\ncandidate 1: " + String(count1) + " candidate 2: " + String(count2) + " candidate 3: " + String(count3) + " candidate 4: " + String(count4));


   delay(5000);
}
else if(touch_state4==1)
{
  digitalWrite(LED4,HIGH);
  digitalWrite(buzzer,HIGH);
//digitalWrite(LED,HIGH);
//delay(1000)
count4++;
Serial.println("\ncandidate 1: " + String(count1) + " candidate 2: " + String(count2) + " candidate 3: " + String(count3) + " candidate 4: " + String(count4));


   delay(5000);
}
delay(1000);
}
