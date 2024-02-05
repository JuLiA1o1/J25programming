# EXPLANATIONS 2

## Jingle bells
![image](https://s3.amazonaws.com/halleonard-pagepreviews/UG_fa444449000f0a23.png)

On this project I did some research and organization first to understand and do it worth it.

### research:

```C++
//bucle con 1 array
melody{nota1,duracion1,nota2,duracion2...}

//bucle con 2 arrays
notas_tonos{LA,SI,DO...}
notas_duraciones{NEGRA,BLANCA,REDONDA...}
```
```C++
int notes = sizeof(melody) / sizeof(melody[0]) / 2; // all notes
int wholemelody = sizeof(melody) / sizeof(melody[0]); // all elements
```

```C++
//tone(buzzer, frequencia, duracion);
//fa# = sol b
```
```C++
// notes frequency 

#define DO2 1046.5
#define DO 523.25
#define SOL 783.99
#define LA 880
#define SI 987.77
#define RE2 1174.66
#define SILENCIO 0
````
```C++
// notes tempos

#define CORCHEA 8
#define NEGRA 4
#define BLANCA 2
#define REDONDA 1
``` 
ESQUEMA
para organizar y tener claras las notas que se van a reproducir 
```C++
// first line
tone(8, si, negra); 
tone(8, si, negra);
tone(8, si, blanca);

tone(8, si, negra);
tone(8, si, negra);
tone(8, si, blanca);

tone(8, si, negra);
tone(8, re up, negra);
tone(8, sol, negra);
tone(8, la, negra);

tone(8, si, redonda);


// second line
tone(8, do, negra);
tone(8, do, negra);
tone(8, do, negra);
tone(8, do, negra);

tone(8, do, negra);
tone(8, si, negra);
tone(8, si, negra);
tone(8, si, negra);

tone(8, si, negra);
tone(8, la, negra);
tone(8, la, negra);
tone(8, si, negra);

tone(8, la, blanca);
tone(8, re up, blanca);


// third line
tone(8, si, negra);
tone(8, si, negra);
tone(8, si, blanca);

tone(8, si, negra);
tone(8, si, negra);
tone(8, si, blanca);

tone(8, si, negra);
tone(8, re up, negra);
tone(8, sol, negra);
tone(8, la, negra);

tone(8, si, redonda);


//fourth line
tone(8, do, negra);
tone(8, do, negra);
tone(8, do, negra);
tone(8, do, negra);

tone(8, do, negra);
tone(8, si, negra);
tone(8, si, negra);
tone(8, si, negra);

tone(8, re up, negra);
tone(8, re up, negra);
tone(8, do, negra);
tone(8, la, negra);

tone(8, sol, blanca);
tone(8, 0, silenci de 2);
```

```C++
int tempo = 100; // tempo de la cancion, baria entre cancion mas rapida o mas lenta

int buzzer = 8; // punto donde el altaboz se conecta en el arduino

//ESQUEMA SIMPLIFICADO
int melody[] = { // [] muestra que algo es un array
//first line
SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,
//second line
DO,NEGRA,DO,NEGRA,DO,NEGRA,DO,NEGRA,DO,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,LA,NEGRA,LA,NEGRA,SI,NEGRA,LA,BLANCA,RE2,BLANCA,
//third line
SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,SI,NEGRA,SI,BLANCA,SI,NEGRA,RE2,NEGRA,SOL,NEGRA,LA,NEGRA,SI,REDONDA,
//fourth line
DO,NEGRA,DO,NEGRA,DO,NEGRA,DO,NEGRA,DO,NEGRA,SI,NEGRA,SI,NEGRA,SI,NEGRA,RE2,NEGRA,RE2,NEGRA,DO,NEGRA,LA,NEGRA,SOL,BLANCA,SILENCIO,BLANCA
};

```
### explanation

**Definitions:** The code defines several musical notes as frequencies using **#define** statements. Each note is associated with a frequency in Hertz, and there are also definitions for different note durations (corresponding to musical notation).

**Setup Function:**
Iterates through each note in the **melody[]** array.
Calculates the duration of each note based on the tempo and note type.
Plays each note using the **tone()** function, specifying the buzzer pin, note frequency, and duration.
Delays for the duration of the note before stopping the tone with **noTone()**.

**Loop Function:** empty

[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/JINGLE.BELLS_array.ino)

---

## multiplers_7

This program initializes serial communication and go through the numbers 1 to 100. For each number, if it leaves a residuo of 1 when divided by 7, it calls the resolverProblemaDibujo function, which prints a message. 

setup explanation;
```C++
void setup() {
    Serial.begin(9600); //This initializes serial communication with 9600 bits per second
    for (int n = 1; n <= 100; n++) { // This loop iterates from 1 to 100
        if (n % 7 == 1) { // This condition checks if the current value of [n] leaves a residuo of 1 when divided by 7
            resolverProblemaDibujo(n); // If the condition is true, it calls the function ·resolverProblemaDibujo·
        }
    }
}
````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
}
````
resolverProblemaDibujo explanation;
```C++
void resolverProblemaDibujo(int n) { // takes the integer [n]
    Serial.print("resolviendo problema"); // prints the string "resolviendo problema"  
    Serial.println(n); // prints value of [n], to determinate which porblem is the one it's on process
}
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/multiplers_7.ino)

---

## problem_solver_3.1

This program goes trought the numbers from 1 to 100. For each number, if it is divisible by 6 or the sum of its units and tens digits is odd, it calls the **resolverProblemaDibujo** function, which prints a message.

setup explanation:
```C++
void setup() {
  // run once:

  for (int n = 1; n <= 100; n++) { // This loop iterates from 1 to 100
    if (n % 6 == 0 || sumaInpar(n)) { // checks if the current value of [n] is divisible by 6 (n % 6 == 0) or if is the function sumaInpar(n) returns true
      resolverProblemaDibujo(n); //If the condition is true, it calls the function resolverProblemaDibujo
    }
  }
}
````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````

sumaInpar explanation;
```C++
bool sumaInpar(int n) {
  if (n == 100) { //If [n] is equal to 100
    return false; // return false
  }
  
  int unidades = n % 10; 
  int decenas = (n / 10) % 10; // (/) division
  // extracts the units and tens digits of n using (%) and division (/)
  int suma = unidades + decenas; // calaculates the suma of units and tens digits
  
  if (suma % 2 == 1) { // If the sum is odd 
    return true; // return true
  } else { // If the sum is  NOT odd 
    return false; // return false
  }
}

````
resolverProblemaDibujo explanation;
```C++
void resolverProblemaDibujo(int n) { // takes the integer [n]
    Serial.print("resolviendo problema"); // prints the string "resolviendo problema"  
    Serial.println(n); // prints value of [n], to determinate which porblem is the one it's on process
}
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/problem_solver_3.1.ino)

---
## problem_solver_3.2
This program goes trought the numbers from 1 to 100. For each number, if it is divisible by 6 or the sum of its units and tens digits is odd, it calls the resolverProblemaDibujo function, which prints a message.

setup explanation;
```C++
void setup() {
  // run once:

  for (int n = 1; n <= 100; n++) { //  initializes a loop that goes from number 10 to 100
    if (n % 6 == 0 || sumaInpar(n)) { // If the value of [n] is divisible by 6 or sumaInpar(n) returns true
      resolverProblemaDibujo(n); //If the condition is true, it calls the function resolverProblemaDibujo
    }
  }
}
````

loop explaination;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
sumaInpar explanation;
```C++
bool sumaInpar(int n) {
  if (n == 100) { //If [n] is equal to 100
    return false; // return false
  }
  
  int unidades = n % 10; 
  int decenas = (n / 10) % 10; // (/) division
  // extracts the units and tens digits of n using (%) and division (/)
  int suma = unidades + decenas; // calaculates the suma of units and tens digits
  
  if (suma % 2 == 1) { // If the sum is odd 
    return true; // return true
  } else { // If the sum is  NOT odd 
    return false; // return false
  }
}

````
resolverProblemaDibujo explanation;
```C++
void resolverProblemaDibujo(int n) { // takes the integer [n]
    Serial.print("resolviendo problema"); // prints the string "resolviendo problema"  
    Serial.println(n); // prints value of [n], to determinate which porblem is the one it's on process
}
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/problem_solver_3.2.ino)

---
## problem_solver_5

This program goes trought the numbers from 1 to 100. For each number, if it contains the digit 3, it calls the resolverProblemaDibujo function, which prints a message.
setup explanation;
```C++
void setup() {
  Serial.begin(9600); // Initializes serial with 9600 bits per second.
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) { // This loop iterates from 1 to 100
    if (tieneTres(numeroProblema)) { // Checks if the function tieneTres returns true for the current value of numeroProblema
      resolverProblemaDibujo(numeroProblema); // Calls the resolverProblemaDibujo function if tieneTres returns true.
    }
  }
}

````

loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
resolverProblemaDibujo explanation;
```C++
void resolverProblemaDibujo(int n) { // takes the integer [n]
    Serial.print("resolviendo problema"); // prints the string "resolviendo problema"  
    Serial.println(n); // prints value of [n], to determinate which porblem is the one it's on process
}
````
tieneTres explanation;
```C++
bool tieneTres(int num) { // It iterates through each digit of the number using a while loop
  while (num != 0) { // while num is not equal to zero we can initialize what comes next
    int numero = num % 10; // It removes the last digit from the number by dividing it by 10.
    if (numero == 3) { // If the extracted digit is equal to 3
      return true; // Returns true 
    }
    num /= 10; // Removes the last digit from the number.
  }
  return false; // Returns false if the number does not contain digit 3.
}
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/problem_solver_5.ino)

---
## sum_50or10

This program goes trought the numbers from 1 to 100.For each number, if the sum of its digits is either 10 or 5, it calls the resolverProblemaDibujo function, which prints a message

setup explanation;
```C++
void setup() {
  Serial.begin(9600); // Initializes serial communication with 9600 bits per second
  for (int numeroProblema = 1; numeroProblema <= 100; numeroProblema++) { // This loop iterates from 1 to 100
    if (ifSum5Or10(numeroProblema)) { // Checks if the function ifSum5Or10 returns true for the current value of numeroProblema
      resolverProblemaDibujo(numeroProblema); // Calls the resolverProblemaDibujo function if ifSum5Or10 returns true.
    }
  }
}

````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
resolverProblemaDibujo explanation;
```C++
void resolverProblemaDibujo(int n) { // takes the integer [n]
    Serial.print("resolviendo problema"); // prints the string "resolviendo problema"  
    Serial.println(n); // prints value of [n], to determinate which porblem is the one it's on process
}
````
digitSum explanation;
```C++
int digitSum(int number) {
    int sum = 0; // Initializes a variable sum to store the sum of the digits
    while (number > 0) { // while number is bigger than number 0, next steps will run
        sum += number % 10; // Adds the last digit to the sum.
        number /= 10; // Removes the last digit from the number.
    }
    return sum; // Returns the sum of the digits.
}

````

ifSum5Or10 explanation;
```C++
bool ifSum5Or10(int num) {
  int sum = digitSum(num); // Calculates the sum of digits.
  return sum == 10 || sum == 5; // Returns true if the sum is either 10 or 5.
}

````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/sum_5or10.ino)

---
## swap_1

Performs a character swap operation on the string "webi wabo", replacing 'a' with 'i' and 'i' with 'a'. It then prints both the original and modified strings to the serial monitor.

setup explanation;
```C++
void setup() {
  Serial.begin(9600); // Initializes serial communication with 9600 bits per second.
  
  // Define an original string and print it
  String originalString = "webi wabo"; // definition
  Serial.print("String Original:: "); 
  Serial.println(originalString);// print it out

  // Swap 'a' and 'i' in the original string and print the result
  originalString = swapAandI(originalString);
  Serial.print("After swapping 'a' and 'i': ");
  Serial.println(originalString);
}

````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
swapAandI explanation;
```C++
// The swapAandI function takes a string parameter str and returns a modified string where all occurrences of 'a' are replaced with 'i', and all occurrences of 'i' are replaced with 'a'.
String swapAandI(String str) {
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'a') {
      str[i] = 'i';
    } else if (str[i] == 'i') {
      str[i] = 'a';
    }
  }
  return str;
}

````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/swap_1.ino)

---
## swap_2

It initializes serial communication, defines an original string "webi wabo", prints it to the serial monitor, swaps the first two letters of the original string, and prints the modified string.

setup explanation;
```C++
void setup() {
  Serial.begin(9600); // Initializes serial communication at a baud rate of 9600 bits per second.
  
  // Define an original string and print it
  String originalString = "webi wabo";
  Serial.print("String Original: ");
  Serial.println(originalString); // Prints the original string to the serial monitor.

  // Swap the first two letters of the original string and print the result
  originalString = swapFirstTwoLetters(originalString);
  Serial.print("After swapping first 2 letters: ");
  Serial.println(originalString); // Prints the modified string to the serial monitor.
}

````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
swapFirstTwoLetters explanation;
```C++
String swapFirstTwoLetters(String str) {
  if (str.length() >= 2) { // Checks if the length of the string is at least 2.
    char temp = str[0]; // Stores the first character of the string in a temporary variable.
    str[0] = str[1]; // Assigns the second character of the string to the first position.
    str[1] = temp; // Assigns the temporary variable (which holds the original first character) to the second position.
  }
  return str; // Returns the modified string.
}
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/swap_2.ino)

---

## swap_3 (juanita)

This program goes around some letter changes along the word choosen and as a diference to the others, this one have multiple choise on the setup.

setup (option 1) explanation;
```C++
void setup() {
  Serial.begin(9600); // Initializes serial communication at a baud rate of 9600 bits per second.
  String word = ["webi wabo"]; // Defines a string variable named 'word' with the value "webi wabo".
  
  // Swap the first 2 letters
  Serial.println(word); // Prints the original word.
  Serial.println(word[0]); // Prints the first letter of the word (W).
  String juanita = word[1]; // Stores the second letter of the word (E) in the variable 'juanita'.
  Serial.println(juanita); // Prints the second letter of the word (E).
  word[1] = word[0]; // Swaps the second letter (E) with the first letter (W).
  word[0] = juanita; // Swaps the first letter (W) with the second letter (E).
  Serial.println(word); // Prints the modified word.
  
  //RESULT = ewbi wabo
}
````

setup (option 2) explanation;
```C++
Serial.println(word); // Prints the word.
Serial.println(word[6]); // Prints the sixth letter of the word (A).
String juanita = word[3]; // Stores the third letter of the word (I) in the variable 'juanita'.
Serial.println(juanita); // Prints the third letter of the word (I).
word[3] = word[6]; // Swaps the third letter (I) with the sixth letter (A).
word[6] = juanita; // Swaps the sixth letter (A) with the third letter (I).
Serial.println(word); // Prints the modified word.

````
setup (option 3) explanation;
```C++
Serial.println(word); // Prints the word.
Serial.println(word[7]); // Prints the seventh letter of the word (B).
String juanita = (word["v"]); // Retrieves the character 'v' from the string and stores it in the variable 'juanita'.
Serial.println(juanita); // Prints the letter 'v'.
word[7] = word["v"]; // Assigns the value of 'juanita' (which is 'v') to the seventh position of the word.
Serial.println(word); // Prints the modified word.

````
loop explanation;
```C++
void loop() {
    // Empty loop, nothing is executed
    }
````
[Link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino%202/swap_3%20(juanita).ino)

---
