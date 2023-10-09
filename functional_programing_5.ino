
void setup() { 
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  morseJ();
  morseU();
  morseL();
  morseI();
  morseA();
  Serial.println();
  delay(1000);
  }

void morseJ() {
morseDot();
morseDash();
morseDash();
morseDash();
Serial.print("/"); 
}

void morseU() {
morseDot();
morseDot();
morseDash();
Serial.print("/"); 
}

void morseL() {
morseDot();
morseDash();
morseDot();
morseDot();
Serial.print("/"); 
}

void morseI() {
morseDot();
morseDot();
Serial.print("/");  
}

void morseA () {
morseDot();
morseDash();
Serial.print("/"); 
}

void morseDot() {
Serial.print("."); 
}

void morseDash() {
Serial.print("_"); 
}