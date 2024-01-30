void setup() {
  Serial.begin(9600);
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) {
    if (ifSum5Or10(numeroProblema)){
      resolverProblemaDibujo(numeroProblema);
    }
  }
}

int digitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

void loop() {}

void resolverProblemaDibujo(int n) {
  Serial.print("Resolviendo problema ");
  Serial.println(n);
}
bool ifSum5Or10(int num) {
  int sum = digitSum(num);
  return sum == 10 || sum == 5;
}