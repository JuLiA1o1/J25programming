void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
String input = Serial.readString();                       //LOCAL SCOPE
if(input!=""){ // word & word with enter between them
Serial.println("you have input:"+input);
decide(input); //
}
}

void decide (String input){
  if (input=="cook\n"){
    cook(); 
  }
}

void cook(){
Serial.println("we are cooking");
}
