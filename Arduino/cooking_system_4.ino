//coking system 2 own recepie
//receipt: 1 masa pizza, 2 queso, 1 jamon dulce, oil, 2 tomate
int masaPizza = 0;
int queso = 0;
int jamonDulce = 1;
bool oil = true;
double tomate = 0.5;

void setup() {
  Serial.begin(9600);
}
void loop() {
  String input = Serial.readString();
  if (input != "") {
    Serial.println();
    Serial.print("Has esctrio: ");
    Serial.println(input);
    input.trim();
    decide(input);
  }
}
void decide(String input) {
  Serial.println("We are deciding");
  if (input == "cook") {
    cook();
  }
  if (input == "masaPizza") {
    masaPizza++;
  }
  if (input == "queso") {
    queso++;
  }
  if (input == "jamonDulce") {
    jamonDulce++;
  }
  if (input == "tomate") {
    tomate++;
  }
}
void cook() {
  Serial.println("We are cooking Jessie");
  if (queso >= 2 && masaPizza >= 1 && tomate >= 0.5 && jamonDulce >= 1 && oil) {
    Serial.println("you have a Pizza");
    queso = queso - 2;
    masaPizza--;
    tomate = tomate - 0.5;
    jamonDulce--;
  }
  else if (input == "show"){
  Serial.println("These are the ingredients that we have");
  Serial.print(masaPizza);
  Serial.println("masaPizza");
  Serial.println(queso);
  Serial.println("queso");
  Serial.println(tomate);
  Serial.println("tomate");
  Serial.println(jamonDulce);
  Serial.println("jamonDulce");
  
  if(oil){Serial.println("We have oil");}
  else{Serial.println("We don't have oil");}
 }
}
