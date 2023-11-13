int dotDuration = 500;

void setup() { 
  // put your setup code here, to run once:
  pinMode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  morseJ();
  morseU();
  morseL();
  morseI();
  morseA();
  delay(dotDuration*4);
  }

void morseJ() {
morseBlink(1);
morseBlink(3);
morseBlink(3);
morseBlink(3);
delay(dotDuration*2); 
}

void morseU() {
morseBlink(1);
morseBlink(1);
morseBlink(3);
delay(dotDuration*2); 
}

void morseL() {
morseBlink(1);
morseBlink(3);
morseBlink(1);
morseBlink(1);
delay(dotDuration*2); 
}

void morseI() {
morseBlink(1);
morseBlink(1);
delay(dotDuration*2);  
}

void morseA () {
morseBlink(1);
morseBlink(3);
delay(dotDuration*2);  
}

void morseBlink(int numberofdots) {
digitalWrite(13,1);
delay(dotDuration*numberofdots);
digitalWrite(13,0);
delay(dotDuration);
}
