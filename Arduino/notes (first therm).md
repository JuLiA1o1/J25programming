# **VOCABULARY**
- **Serial.Monitor;** ctrl + shift + M
- **char;** character
- **Heading;** in & out = < h1 > first file < h1 >  
# H1 

## H2 

### H3 

#### H4 ####
- **Brackets;** [] 
- **Parenthesis;** () 
- **Curly braces;** {} 
- **Bold;**  ** bold text ** 
- **Link;** [title](link) 
- **Image;** ![title](link) 
- **LED;**  light emitting diode -->|-- 
- **IDE;** integrated development environment (you have everything you need) 
- **Comment;** /* |||| *\ 
- **File>example>basics>blink**
- **Set up;** repeated once 
- **Loop (bucle);** repeated forever 
- **Abstraction;** opposite to figuration 
don’t care about details 
care about general things 
**EX:** emojis are an abstraction of a person face 
- **Function;** bunch of code that does something when it’s called 
```C++
X → f → f(X)
```

- **FUNCTIONAL PROGRAMING** 
Int dot duration = 250 
Void setup 
Morse 

- **FUNCTION SYNTAX IN C++** 

```C++
Void function name () {code} 

// code:
Digitalwriting (13,High); 
Delay(_);
Digitalwriting (13,Low);
Delay(_);

```


- **comparators;**
(==) same value
(!=) different value
(<) lesser than...
(<=) lesser or equal than...
(>) gratter than...
(>=) gratter or equal than...
- **operators;**
(&&) AND 
(||) OR 
(!) NOT
- **scope;** ambito (lugares donde tiene sentido)
- **string;** chains of characters
**ex:** H-E-L-L-O

- **double**; decimal numbers
- **Serial;** object 
- **Statement;** order 

****

## VARIABLES 

**Types** (specify how much memory & possibilities that offer) 

In C++ and other high typed programming languages,types are mandatory 


****

### Common primitive variables
- Building blocks 
- Complex type of variable
- Char = Character
- Booleans = true/false
- **NUMBER:**
Int = 
Long= bigger numbers 
8int = less memory 
8u int = less memory 
Float 

```C++
int Jordi = 6; 
int Martina = 2; 
int Angel = Jordi + Martina; // Angel = 6+2 = 8
Jordi = Angel – 5; // Jordi = 8-5 = 3
Delay(jordi) // 3 
Delay(martina) // 2 

int Mateo = 3; 
Mateo= Mateo+2; // Mateo = 3+2 = 5
int Alvaro = 4; 
Delay (Mateo); // 5
Mateo = Alvaro; // Mateo = 4
Mateo = Mateo+2; // Mateo = 4+2 = 6
Delay (Mateo); // 6 
```
****
### Common assigment (C++) 
```C++
A = A+1; 
A++; 
B = B-1; 
B--; 
```
****
### Constants : 
allways same value 
```C++
SCREAMING_SNAKE_CASE 
Const int LUYI =5; 
LUYI= 4; 
```
****


# FLOW CONTROL 
**BOOLEANS**; variables that can be true or false 
```C++
If (condition) { 
// code executed if the condition is true 
Else { 
// code executed if the condition is false 
// code executed in both cases 
```
### **How determine if condition is TRUE  or FALSE?**
using boolean
```C++
If boolean value = true 
condition = true
```
```C++
If boolean value = false
condition = not meet 
```
**Ex;** 

```C++
Bool meGustaPicaso = false ; 

If (meGustaPicaso) { 
GoToMuseoPicaso () ; } 

Else { goToDesignMuseo () ; } 

// Answer: goToDesignMuseo 
```
****
### OPERATOR of COMPARATION

```C++
y == x 
int miNumero = 9; 
int numeroPremiado = random(1000); 

if (miNumero == numeroPremiado) { 
// win money 
} 
```

```C++
if (patatas) { 
    if (huevos) { 
    Tortillas(); 
} 

Freir(); 
} 

else { 
pedirSushi(); 
} 

//| HUEVOS | PATATAS | EXECUTION      |
//| ------ | --------| -------------- |
//| false  | false   |PedirSushi;     |
//| false  | true    |Freir;          |
//| true   | false   |PedirSushi;     |
//| true   | true    |Tortilla; Freir;| 
```

```C++
int a= 3;
int b= 5;
int c= 6;

if(x) {
  a++;
  if (y) {
  c++;
  b--;
  }
  else{
      a = b;
  }
  c++;
}
else if(y) {
    c--;
}
else {
    b++;
    c = b+3;
}
Serial.println(a);
Serial.println(b);
Serial.println(c);

 | X | Y | A | B | C | 
 |---|---|---|---|---|
 | F | F | 3 | 6 | 9 | 
 | F | T | 3 | 6 | 5 | 
 | T | F | 5 | 5 | 7 | 
 | T | T | 4 | 5 | 8 | 
```

### Nested ifs (ifs anidados)
ifs dentro de ifs


```C++
COMPARATION
option a) we have a boolean variable (bool)
if the variable value is true then we go inside the if
if the variable value is false then we don't go inside the if. if there is an else we go inside the else

bool a = true;
if (a) {
go to paris ();
}
goToHongKong();

bool b = false;
if (b) {
goToBerlin ();
}
else {
goToBuenosAires();
}

else if. else if is an extra condition where you can check before doing something else.

bool a = true
bool b= false

if (b) {
// code not executed
}
else if (a) {
// code executed
}
else {
// code not executed
}

switch case format:

if (character =='a') {
// code for transforming into morse code letter A
morseA();
}
else if (character =='b') {
// code for transforming into morse code letter B
}
else {
// code if the character is not valid or doesen't have any of the declared values
}


switch(character) {
case 'A':
//code for transforming into morse code letter A
morseA();
break;
case 'B':
//code for transforming into morse code letter B
morseB();
break;
default:
// code if the character is not valid or doesn't have any of the declared values
}
```
```C++
programming lenguatges need to be consistent and univocal.
Thats why we use;
'=' for asignation
'==' for comparation
```
```C++
COMPARATORS

(==) same value
(!=) different value
(<) lesser than...
(<=) lesser or equal than...
(>) gratter than...
(>=) gratter or equal than...
```
```C++
COMBO BURGER (boolean operators)

(&&) AND operator
|| OR operator
! NOT operator
```
```C++
//example 1

eggsInTheFridge
potatoesInTheKitchen

if (eggsInTheFridge && potatoesInTheKitchen) {
cookSpanishOmelette();
}

//example 2

if (cocoaOpen || titusOpen) {
goToDisco ();
}

//example 3

if ((eggsInTheFridge && potatoesInTheKitchen)||sausagesInTheKitchen) {
cookSomething ();
}
else {
goToKebab();
}

//example 4

if (!eggsInTheFridge) {
goToBuySomeEggs();
}

//example 5

if (TRpassed && meanGrade >= 5 && allFinalTestPassed) {
deliverBatchilleratoTitle();
}
```
#### Types of Scope

- Global Scope (Fuera de todo)
- Local Scope (Dentro)

### String()
**Strings**; Cadena de caracteres

Constructs an instance of the String class. There are multiple versions that construct Strings from different data types (i.e. format them as sequences of characters), including:

- a constant string of characters, in double quotes (i.e. a char array)
- a single constant character, in single quotes
- another instance of the String object
- a constant integer or long integer
- a constant integer or long integer, using a specified base
- an integer or long integer variable
- an integer or long integer variable, using a specified base
- a float or double, using a specified decimal places

### **Syntax**
```C++
String(val)
String(val, base)
String(val, decimalPlaces)
```

**Ex;**
All of the following are valid declarations for Strings

```C++
String stringOne = "Hello String";                    // using a constant String
String stringOne = String('a');                       // converting a constant char into a String
String stringTwo = String("This is a string");        // converting a constant string into a String object
String stringOne = String(stringTwo + " with more");  // concatenating two strings
String stringOne = String(13);                        // using a constant integer
String stringOne = String(analogRead(0), DEC);        // using an int and a base
String stringOne = String(45, HEX);                   // using an int and a base (hexadecimal)
String stringOne = String(255, BIN);                  // using an int and a base (binary)
String stringOne = String(millis(), DEC);             // using a long and a base
String stringOne = String(5.698, 3);                  // using a float and the decimal places
```

**Special characters** → From the C Programming Language:

```C++
\a alert (bell) character
\b backspace 
\f formfeed 
\n newline (linefeed) 
\r carriage return 
\t horizontal tab 
\v vertical 
tab\ backslash 
\ddd octal constant 
\xhh hexadecimal constant
? question mark 
' single quote 
```

### Global variables
Recipe

**Spanish omellete**
- 2 eggs
- Potato
- 0.25 Onion
- Oil

```C++
int eggs = 4;
int potato = 0;
Boolean oil = true;
Double onion = 1;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
String input = Serial.readString();
if (input != "") {
Serial.println("You have input: " + input);
input.trim();
decide(input);
}
}

// cooking part 

void cook() {
Serial.println("We are cooking");
if (eggs >= 2 &&
potato == 1 &&
onion >= 0.25 && oil ) {
Serial.println("you have a Spanish Omelette");
eggs = eggs - 2;
potato--;
onion = onion - 0.25;
 }
}
void decide(String input) {
if (input == "cook") {
cook();
 }
if(input=="potato"){potato++;}}
}
