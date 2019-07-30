void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Inicializando programa");

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("tengo flojera de programar");
while (1){Serial.print(".");
delay(5000); 
}
}
