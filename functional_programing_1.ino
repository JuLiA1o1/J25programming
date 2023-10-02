int dotDuration = 500;

void setup() { 
  // put your setup code here, to run once:
  pinMode (13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//J
morseDot();
morseDash();
morseDash();
morseDash();
delay(dotDuration*2);

//U
morseDot();
morseDot();
morseDash();
delay(dotDuration*2);

//L
morseDot();
morseDash();
morseDot();
morseDot();
delay(dotDuration*2);

//I
morseDot();
morseDot();
delay(dotDuration*2);

//A
morseDot();
morseDash();
delay(dotDuration*6);
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