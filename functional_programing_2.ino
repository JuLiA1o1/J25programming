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
morseDot();
morseDash();
morseDash();
morseDash();
delay(dotDuration*2); 
}

void morseU() {
morseDot();
morseDot();
morseDash();
delay(dotDuration*2); 
}

void morseL() {
morseDot();
morseDash();
morseDot();
morseDot();
delay(dotDuration*2); 
}

void morseI() {
morseDot();
morseDot();
delay(dotDuration*2);  
}

void morseA () {
morseDot();
morseDash();
delay(dotDuration*2);  
}

void morseDot() {
digitalWrite (13,1);
delay(dotDuration);
digitalWrite (13,0);
delay(dotDuration);
}

void morseDash() {
digitalWrite (13,1);
delay(dotDuration*3);
digitalWrite (13,0);
delay(dotDuration);
}