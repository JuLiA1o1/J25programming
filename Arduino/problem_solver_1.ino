void setup () {
Serial.begin (9600);

for (int numeroProblema = 1; numeroProblema <= 30; numeroProblema ++) {
resolverProblemaDibujo (numeroProblema);
}
}

void loop() {}

void resolverProblemaDibujo (int n) { // ( [int] data type / [n] number)

    Serial.print ("resolviendo problema");
    Serial.println (n);
}