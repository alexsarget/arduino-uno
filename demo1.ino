int PINOUT=2;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Inicializando programa");
Serial.println ("Setting pin 2 as output");
pinMode (PINOUT,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("PIN 2 -> ON");
digitalWrite (PINOUT,HIGH);
delay (500);
Serial.println("PIN 2 -> OFF");
digitalWrite (PINOUT,LOW);
delay (500); 

}
