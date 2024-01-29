void setup() {
  // put your setup code here, to run once:

  for (int n = 1; n<= 100; n++){
    if (n % 6 == 0 || sumaInpar(n))
    { resolverProblemaDibujo(n)}
  }



void loop() {
  // put your main code here, to run repeatedly:

}

 bool sumaInpar(int n){
  
  if (n == 100) {return false;}
  
  int unidades = n %10;
  int decenas = (n / 10) % 10; // [/] division
  int suma = unidades + enteras
  
  if (suma % 2 == 1) {return true;}
      else {return false}
  }


void resolverProblemaDibujo (int n) { // ( [int] data type / [n] number)

    Serial.print ("resolviendo problema");
    Serial.println (n);
}