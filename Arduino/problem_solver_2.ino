void setup () {
Serial.begin (9600);

for (int n = 1; n <= 30; n ++){
if (n % 7 == 1 && n % 3 == 0){
resolverProblemaDibujo (n);
}
}

void loop() {}

void resolverProblemaDibujo (int n) { // ( [int] data type / [n] number)

    Serial.print ("resolviendo problema");
    Serial.println (n);
}