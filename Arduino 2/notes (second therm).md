 # VOCABULARY
 
- **parameter;**
```C++
delay(); // 1 parameter
     1
digitalWrite(PIN, HIGH/LOW) // 2 parameters
              1      2
```
- flag variable = bool que permite tomar desicion
- **compile;**
it works
- **iterario;**
exact repetition or repetition with some changes
- **function;**
it works how we expected
- **call;**
```C++
nameOfFunction (parameter value if necessary);
```
- **definition;**
```C++
nameOfFunction ([type]parameter if necessary);
-----------
------------ // implementation
--------------
```
- **moduls or reminder;**
7/3= 2.33333
    - in programming 
    7/3= 2
- **bool;** return type
- **array;** variables that store several values in a specific order
**ex;** F A T E (destino)
a String is an array of characters
- **modulo(%)**= sirve para DNI...
- (DNI research) [https://hackmd.io/atLj5kMKRSyfEnDSyBRZyA]

- **common line interface (CLI);** forma comunicacion con ordenador a traves de comands escritos
    **ex;** lupa de google
    
***

## LOOPS and ITERATIONS
#### REPEAT* 

**LOOP;** general movement view
**Ex;** chascar huevos

**ITERATIONS;** individual movements
**Ex;** cada movimiento que se ejerce para llevar la funcion a cabo
***
### SYNTAXIS while
```C++ 
while (conditon){
-------
-------
-------
}
```
***
**EXAMPLE 1**
Repeated until the condition() its done a get started next step
```C++
do while (condition) { // eggs>0 // if eggs are lesser than 0, which means there is non left, the condition finish and go to the next step; whisk()
takeEggs();
breakEggs();
throwGarbage();
}
whisk();
```
**EXAMPLE 2**
Constantly repeated; infinite loop
```C++
do while (true) {
climbMountainWithBoulder(); //sube montaña con la piedra, se cae la piedra, baja buscarla y se repite el proceso. sube...
seeHowTheBalderFalls(); // balder = rock
goBackToTheBottomOfTheMountain();
}
```
**EXAMPLE 3**
Repeated until the condition() its done
(after complitting it; nothing done; finished  function)
```C++ 
while (not connected){
tryToConnect();
}
```
Codig to add all numbers until 200
only add even (pares) numbers
```C++
int numero = 0;
int suma = 0;
while (numero<200){ // mientras number is smaller than 200 the condition will be on and on
numero = numero+2; // number increased by 2 each time
suma = suma+numero; // suma increased by suma() and number()
}
Serial.println(suma); // final result once you add all even numbers until 200
```
***

```C++
resolverProblemaDibujo(53); // 53[is a parameter]  is a call NOT definition

```
## **PROBLEM SOLVER 1**

This variable solve all "ProblemaDibujo" 1 to 30 and once it get's to 30, stop solving

```C++
void setup () {
Serial.begin (9600);

int numeroProblema = 1; // first problema to solve

while (numeroProblema <= 30) {
    resolverProblemaDibujo (numeroProblema);
    numeroProblema ++;
}
}

void loop() {}

void resolverProblemaDibujo (int n) { // ( [int] data type / [n] number)
    Serial.print ("resolviendo problema");
    Serial.println (n);
}
```
### **PROBLEM SOLVER 1.2**

The diference between **"problemSolver1"** and **"problemSolver2"** is that this one the information is on the loop

**Result / diference;** instead of resolving all the problem and once it gets to problem 30 stop, this one solve until 30 and keep solving 1 to 30 again and again
```C++
void setup () {
Serial.begin (9600);
}


void loop() {

  int numeroProblema = 1; // first problema to solve

while (numeroProblema <= 30) {
    resolverProblemaDibujo (numeroProblema);
    numeroProblema ++; 
    }
}

void resolverProblemaDibujo (int n) { // ( [int] data type / [n] number)

    Serial.print ("resolviendo problema");
    Serial.println (n);
}
```
***
### SYNTAXIS bucle **"for"**
```C++
for (function of variable; iteration condition; step) {
--------- // codig to repeat
---------
}
```
***
## **PROBLEM SOLVER 2**
```C++
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
```

**EXAMPLE 1**
```C++
// numeroProblema = nP
````
```c++
for (int nP = 1; nP <= 30; nP = nP + 2){
resolverProblemaDibujo (nP);
}
// solo problemas impares
````

**EXAMPLE 1.1 (combio orden)**

```C++
for (int nP = 30; nP >= 1; nP = nP--){
resolverProblemaDibujo (nP);
}
// resuelve en orden descendente, resolvera del problema 30 al 1
```
**EXAMPLE 1.2 (todos menos problema 17)**

```C++
for (int nP; nP <= 30; nP++){
if (n != 17) {
resolverProblemaDibujo (nP);
}
}

// otra forma de definir "if"

for (int nP; nP <= 30; nP++){
if (n==17) {n++;}
resolverProblemaDibujo (nP);
}
```
**EXAMPLE 1.3 (todos menos problema 17 + 23)**

```C++
for (int nP; nP <= 30; nP ++){
if (n != 17 && n != 23){
resolverProblemaDibujo (nP);
}

// otra forma de definir "if"

for (int nP; nP <= 30; nP ++){
if (!(n == 17 || n == 23)){
resolverProblemaDibujo (nP);
}
```


**EXAMPLE 1.4**
```C++
// problem number = n

// numeros pares n % 2
// numeros impares n % 3

for (int n = 1; n <= 30; n ++){
if (n % 2 == 1 && n % 3 == 0){
resolverProblemaDibujo (n);
}
```
***
## **PROBLEM SOLVER 3**


### EXERCISE (all numbers that end with 6 or 3)

**WAY 1**
si nos interessa orden; 3 6 13 16
```C++
  for (int n = 1; n<= 100; n++){
    if (n % 10 == 3 || n % 10 == 6) // [3 & 6] rest
    // ex; 33 : 10 // 33%10
    //     |3|  3  
    { resolverProblemaDibujo(n)}
  }
```
**WAY 2**

```C++
  for (int n = 3; n<= 100; n + 10){ // primero ejecutara numeros terminados en 3
    { resolverProblemaDibujo(n)}
  }

  for (int n = 6; n<= 100; n + 10){ // seguidamente ejecutara numeros terminados en 6
    { resolverProblemaDibujo(n)}
  }
```
FALTA FORMA JORDI

### EXERCISE (multiplers of 7)

**WAY 1**

```C++
  for (int n = 1; n <= 100; n++){ 
 if (n % 7 == 0) // if it have to be multipler of a number the rest will be 0
    { resolverProblemaDibujo(n)}
  }
```

**WAY 2**
```C++
  for (int n = 7; n <= 100; n = n + 7){ // 
    { resolverProblemaDibujo(n)}
  }
```
### EXERCISE (digits added = even [par] number)
```C++
  for (int n = 1; n <= 100; n++){
  if (sumaPar(n))
    { resolverProblemaDibujo(n)}
  }
  
  bool sumaPar(int n){ // bool is a function == true or false
  
  if (n == 100) {return false;}
  
  int unidades = n %10;
  int decenas = (n / 10) % 10; // [/] division
  int suma = unidades + enteras
  
  if (suma % 2 == 0) {return true;}
      else {return false}
  }
```
****
## **PROBLEM SOLVER 4**

### EXERCISE (digits added = 5 or 10)

 ```C++
 bool quim = true;
 int jordi = 1002;
 
 quim = ! quim; // operator not = turns quim to false
 jordi = ! jordi; // operator another thing
 // [!] NOT
```
 ```C++
 for (int np = 1; np <= 100; np++){
 if (digitsSum10or5 (np))
 { resolverProblemaDibujo(np)}
  }
  
bool digitsSum10or5 (int n) { // 63

int units = n %10; // 3
int tens = (n / 10) % 10; // 6
int hundreds = (n / 100) % 10; // 0
 
 // WAY 1
 return (units + tens + hundreds == 5) || (units + tens + hundreds == 10);
 } // end method
 
 // WAY 2
 int sum = units + tens + hundreds;
 if (sum == 5 || sum == 10){return true;}
 return false;
 } // end method
 ```
# ARRAY

**ex;** F A T E (destino)
a String is an array of characters
- values colection
- NO change of size
- quick access
- memory size reduced
- **index**
- **value**
An ARRAY element will allways have an index between **0 and n - 1** and a value
(n = array longitud)

### EXAMPLE 1 (with "Liax")
```C++
void Setup {
Serial.begin (9600);
String word = ["LIAX"];

Serial.println (word); // writes the word
Serial.println (word [0]); // [0] = zero // writes the first letter (L)

String juanita = word [1]; // writes the second letter (I)
Serial.println (juanita);

word [1] = word [0];
word [0] = juanita;
Serial.println (word);
}
```
**EXAM EXAMPLE**
```C++
String functionX (String W){
String T = w[1];
w[1] = w[0];
w[0] = t;
return W;
}
// funcion que devuelve mismo string que le mandas cambiando las dos primeras letras de orden
```
**two things of function:**
 the **"return"** value = return
 and/ or they 
 **"output"** (serial.println(----)
 
 ### EXAMPLE with "return"
```C++
String swapFirstletters (string input){
String temporal = input [1];
input [1] = input [0];
input [0] = temporal;
return input;
}
```
 ### EXAMPLE with "output"
```C++
void swapFirstletters (string input){
String temporal = input [1];
input [1] = input [0];
input [0] = temporal;
Serial.println(input);
}
```
### EXERCISE Arrays[0] = webi wabo
```C++
void setup() {

Serial.begin (9600);
String word = ["webi wabo"];

// swap the first 2 letters
Serial.println (word); // writes the word
Serial.println (word [0]); // [0] = zero // writes the first letter (W)

String juanita = word [1]; // writes the second letter (E)
Serial.println (juanita);

word [1] = word [0]; // 1 = W
word [0] = juanita; // 0 = E
Serial.println (word);
}
//RESULT = ewbi wabo

// swap the a(6) an the i(3)
Serial.println (word); // writes the word
Serial.println (word [6]); // writes the sixth letter (A)

String juanita = word [3]; // writes the third letter (I)
Serial.println (juanita);

word [3] = word [6]; // 3 = A
word [6] = juanita; // 6 = I
Serial.println (word);
}
//RESULT = ewba wibo

// substitute the second b(7) with a v
Serial.println (word); // writes the word
Serial.println (word [7]); // writes the seventh letter (B)

String juanita = (word ["v"]); // writes the  letter (v)
Serial.println (juanita);

word [7] = word ["v"]; // 7 = V
Serial.println (word);
}
//RESULT = ewba wivo

void loop() {
  // put your main code here, to run repeatedly:

}
```
### ARRAY (with int)

WAY 1
```C++
int[] grades = {5,7,9,7,6,8} // 5[0],7[1],9[2],7[3],6[4],8[5]
int sum = 0;
sum = sum + grades[0]; // sum = 0 + 5 = 5
sum = sum + grades[1]; // sum = 5 + 7 = 12
sum = sum + grades[2]; // sum = 12 + 9 = 21
sum = sum + grades[3]; // sum = 21 + 7 = 28
sum = sum + grades[4]; // sum = 28 + 6 = 34
sum = sum + grades[5]; // sum = 34 + 8 = 42
int average = sum / 6; // int average = 42 / 6 = ...
// the index of the last element of an ARRAY is the number of element minus 1 = (n-1)
// EX; number 8 is the sixth number but it's numbered as [5]
```
WAY 2 
same thing that way 1 but in a summarized way
```C++
int[] grades = {5,7,9,7,6,8}
int sum = 0;
for(int n = 0, n <= 5, n++){ // 
sum = sum + grades [n];
}
int average = sum / 6
```
### Calculate max 
WAY 1
```C++
int[] grades = {5,7,9,7,6,8}
int max = grades [0];// suponemos que grades[0] (numero 5) es el numero mas grande
//max = 5
if (grades[1] > max){ // si grades[1] (numero 7) es mas grande que 5 el max = 7
max = grades[1];}
// max = 7
if (grades[2] > max){
max = grades[2];}
// max = 9
if (grades[3] > max){
max = grades[3];}
// // max = 9 porque grades[3] (numero 7) es mas pequeño que (numero 9)
if (grades[4] > max){
max = grades[4];}
if (grades[5] > max){
max = grades[5];}
```
WAY 2
```C++
Serial.begin(9600);

int[] grades = {5,7,9,7,6,8}
int max = grades [0];
for (int n = 1; n <= 5; i++){
if (grades[n] > max){
max = grades[n];
}
}
Serial.println(max);
delay(500)
```
### Calculate min
```C++
Serial.begin(9600);

int[] grades = {5,7,9,7,6,8}
int min = grades [0];
for (int n = 1; n <= 5; i++){
 if (grades[n] < min){
 min = grades[n];
}
}
Serial.println(min);
delay(500)
```
serial.print(n)
```C++   
//                [1] [3][4]  [7]
int grades [] = {9,5,8,3,2,9,3,1,7};
int min = grades [0];

for (int n = 1; n <= 8; n++){
if (grades[n] < min){
min = grades[n];

serial.print(n); // n = [1][3][4][7] todos los numeros mas pequeños a su comparacion
}
}
````

serial.print(min)
```C++   
//                      [4]  
int grades [] = {9,5,8,3,2,9,3,1,7};
int min = grades [4];
serial.print(min); // min = 2 porque el grade [4] teniendo en cuenta que empieza por grade [0] tiene el valor de 2

for (int n = 1; n <= 8; n++){
if (grades[n] < min){
min = grades[n];
}
}
````
":" tres puntos en una web que esta bloqueada te envia al cache, idea de la web bloqueada

WAYBACK MACHINE = show the web a years ago

# SONAR

# TONE

```C++
tone(pin, frequencia, duracion)
//         [440Hz]      [ms]
//         A5= la
```
```C++
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

tone(8, 440, 1000); // arduino gap number / note frequency / 1 second
}



void loop() {
  // put your main code here, to run repeatedly:

}
```
elements
indice: [0][1][2]...
abs = valor absoluto
Ex; -5 =abs= 5

DIFERENCE BETWEENN "define" and "int"
Define= insturction to the compilator
**EX;** #define PATATA = 33
Int= variable that ocupate space on the memory
**EX;** constante int PATATA = 33

---

http;    //  github.com   /  julia
protocolo / dominio 

---
## DEFINING FUNCTIONS (trucos)
- void = cuando no devuelve nada (no hay return)
- bool = siempre q hay return true or false
- int = return numbers
- double = resturn decimals
- string = dice string

que devuelve (variables dadas)

 ## ⚠️ IMOPORTANT ⚠️
 
 ### Functions
- append(): This function appends a part of a string to another string.
- assign():This function assigns a partial string.
- at(): This function obtains the character stored at a specified location.
- begin(): This function returns a reference to the start of the string.
- capacity(): This function gives the total element that can be stored.
- compare(): This function compares a string against the invoking string.
- empty(): This function returns true if the string is empty.
- end(): This function returns a reference to the end of the string.
- erase(): This function removes characters as specified.
- find(): This function searches for the occurrence of a specified substring.
- length(): It gives the size of a string or the number of elements of a string.
- swap(): This function swaps the given string with the invoking one.


### Constructors
- String(): This constructor is used for creating an empty string.
- String(const char *str): This constructor is used for creating string objects from a null-terminated string.
- String(const string *str): This constructor is used for creating a string object from another string object.

