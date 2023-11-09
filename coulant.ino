int eggs = 4;
int flour = 4;
bool oil = true;
double chocolate  = 1;
 
void setup(){
 
Serial.begin(9600);
}

void loop(){
 // put your main code here, to run repeatedly:
 String input = Serial.readString();
if(input != ""){
input.trim();
decide(input);
}
}

void cook(){
Serial.println("We are cooking");
delay(500);
if(eggs >= 2 && 
 flour >= 2 &&
 chocolate >= 0.5 && oil ){
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("cooking...");
delay(1000);
Serial.println("Here you have a coulant!");
 eggs = eggs - 2;
 flour - 2;
 chocolate = chocolate - 0.5;

if(eggs < 2) {Serial.println("You need eggs");
 }
 if(flour < 2) {Serial.println("You need flour");
 }
if(chocolate < 0.5) {Serial.println("You need chocolate");
}
}
}


void decide(String input){
if(input=="cook"){
cook();
}

if(input=="flour"){flour++;
}

if(input=="chocolate"){chocolate++;
}

if(input=="eggs"){eggs++;
}
}