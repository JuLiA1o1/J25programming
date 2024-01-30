void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (tieneTres(numeroProblema)) {
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

void loop() {}


void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}

bool tieneTres(int num) {
  while (num != 0) {
  int numero = num % 10;
  if (numero == 3) {
  return true;
  }
  num/=10;
}
  return false;
}