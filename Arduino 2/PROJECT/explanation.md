## PROJECT :paperclip: 
### definition :page_with_curl: 
This project is based on read commands from the serial monitor and execute corresponding actions based on the received commands. For example, play and stop a song, converting a word into a morse code or initiating a cooking recipie.

---

### steps :footprints: 
1. I took those old projects I wanted to include on the code. To not make it too long, instead of putting all of them into the code I used "#include" which allowed me to have the code explanation for example of the song into a different tab and still use it in the code without wasteing too much space.
2. once i defined the comands; play and stop a song, converting a word into a morse code and initiating a cooking recipie I started to think about how to develope it
3. The objective was to writte on the "serial monitor" a word, and this one decide what to do depending on the comand called.
4. It was a hard process since there where some errors harder to find
5. Finally, with some help and organization I could solve most of them, unless the part of "stop()" the song.
So there's the whole explanation of this code I created. With also some documented errors that couldn't found yet.

---

### main code explanation :mag: 

Include explanation;
```C++
#include "morse.h" 
#include "song.h"
#include "coulant.h"
//declares the files that are out of the code, to make sure those tabs are included on it's code
```
Setup explanation;
```C++
void setup()  {
  Serial.begin(9600); // Initializes serial communication with 9600 bits per second
}
```
Loop explanation;
```C++
void loop() {
  readSerial(); // Calls the readSerial function repeatedly and infinitelly
}
```

readSerial explanation;
```C++
void readSerial() {
  Serial.println("Miau"); // Prints "Miau" 
  if (Serial.available() > 0) { // Checks if there is data available to be read
    String word = Serial.readString(); // Reads a string
    word.trim(); // Removes leading and trailing whitespaces from the string.
    Serial.println(word); // Prints the received string
    Serial.println("Longitud del string: "); // Prints "Longitud del string: " 
    Serial.println(word.length()); // Prints the length of the received string 
    decide(word); // Calls the decide function with the received string
  }
}
```

decide explanation;
:::warning
on this part, the whole code compile, but the part which call the stop function, doesn't make the stops as t suposed to do, because the array is empty. Anything I tried to do didn't compile and I saw leaving the array empty it half worked. So it compiles but it doesn't do what it supose to do.
:::
```C++
void decide(String command) {
  Serial.println("hola"); // Prints "hola" 
  if (command.equals("play")) { // Checks if the received command is "play"
    play(); // Calls the play function
    return; // Exits the function
  }
  if (command.equals("stop")) { // Checks if the received command is "stop"
    stop(); // Calls the stop function
    return; // Exits the function
  }
  if (command.startsWith("morse")) { // Checks if the received command starts with "morse"
    morse(command.substring(5)); // Calls the morse function with the substring starting from index 5, so like this the morse word it's avoided and the important part is the one executed as a morse code, so the following word after "morse"
  }
  if (command.equals("coulant")) { // Checks if the received command is "coulant"
    decideCook("in"); // Calls the decideCook function
  }
}
```
---

### command "morse.h" explanation
![morse](https://scontent-mad1-1.xx.fbcdn.net/v/t1.6435-9/95461044_675689809949970_5390051628537610240_n.jpg?_nc_cat=103&ccb=1-7&_nc_sid=7f8c78&_nc_ohc=0NlqBsDt-NEAX8GDyTG&_nc_ht=scontent-mad1-1.xx&oh=00_AfARMiJFB9QhBLa1P8eXoS-TzXKtBgOpNhRPth4vsnz77w&oe=65E3571F)
The **morse function** takes a word and converts each letter of the word to Morse code. Then prints the Morse code representations. Which each representation is separated by a "/" character, and there's a 1-second delay between different words. If a character in the word is not a letter it adds a delay of 2 seconds before moving to the next character.

morse explanation;
```C++
void morse(String word) {
// takes a string word and converts it to Morse code
```
word.toUpperCase explanation;
```C++
  word.toUpperCase();
// converts all characters in the string word to uppercase
```

morse conversion explanation;
```C++
  for (int i = 0; i < word.length(); i++) { // This loop go through each character of the word. It starts from index 0 and continues until the index is less than the length of the word
    switch (word[i]) {
      case 'A': // letter that represent
        Serial.print(".-"); //  print out morse code representation
        break;
      case 'B': // letter that represent
        Serial.print("-..."); //  print out morse code representation
        break;
      // Other letters from the alphabet follow the same pattern, but i just put some as an example

      default: // If the character is not a letter the default case is executed
        delay(2000); // adds a delay of 2 seconds before moving to the next character
        break;
    }
    Serial.print("/"); // After printing the Morse code representation of each character, a "/" character is printed to separate the Morse code representations of different characters
  }

```
Serial.println explanation;
```C++
  Serial.println(""); // This line prints a newline character. Separate different Morse code sequences 
 delay(1000); // adds a delay of 1 second after printing the Morse code for the entire word
  
```
---

### command "song.h" explanation

![image](https://s3.amazonaws.com/halleonard-pagepreviews/UG_fa444449000f0a23.png)

This code defines symbolic names for musical notes and their durations, initializes variables, defines the melody of a song, calculates note durations and the tempo, and provides functions to play and stop the melody

define explanation;
```C++
// notes and their frequency 
#define DO2 1046.5
#define DO 523.25
#define SOL 783.99
#define LA 880
#define SI 987.77
#define RE2 1174.66
#define SILENCIO 0

// notes tempos (determine the length of each note)
#define CORCHEA 8
#define NEGRA 4
#define BLANCA 2
#define REDONDA 1
```
Variables explanation;
```C++
int tempo = 180; // Tempo of the song
int buzzer = 8; // Pin where the buzzer is connected to the Arduino
```
melody explanation;
```C++
int melody[] = {
  // Melody represented as an array of notes and their durations
  // example DO(note),NEGRA(duration)
}
```
note durations explanation;
```C++
int notes = sizeof(melody) / sizeof(melody[0]) / 2; //  calculates the number of notes in the melody array by dividing the total number of elements by 2 (since each note is represented by two elements: the note itself and its duration)
int wholenote = (60000 * 4) / tempo; // calculates the duration of a whole note in milliseconds based on the tempo

````
play explanation;
```C++
// This function plays the melody stored in the melody array
void play() {
  // Code for playing the melody
}
````
stop explanation;

:::danger
on this part i had some problems, since i couldn't find the way to make it work and while the song was playing this could stop
:::

```C++
void stop() {
  // Empty function for stopping the melody (not implemented)
}
````
---

### command "coulant.h" explanation 

![coulant](https://content-cocina.lecturas.com/medio/2018/07/19/paso-a-paso-para-realizar-coulant-clasico-de-chocolate-negro-resultado-final_9b8cdc3b_800x800.jpg)
This code simulates a cooking process for making a coulant.


variables explanation;
```C++
// define value of each variable
int eggs = 4; // eggs with a value of 4
int flour = 4; // flour with a value of 4
bool oil = true; // oil as a boolean with a value of true
double chocolate = 1; //chocolate as a double with a value of 1
```

cook explanation;
```C++
void cook(){
  Serial.println("We are cooking"); // prints "We are cooking"
  delay(500); // wait for 500 milliseconds / half second

  if(eggs >= 2 &&  flour >= 2 && chocolate >= 0.5 && oil ){ // checks if there are enough ingredients to make a coulant
    // Cooking process
  }
  if(eggs < 2) {
    // Printing message if eggs are insufficient
  }
  if(flour < 2) {
    // Printing message if flour is insufficient
  }
  if(chocolate < 0.5) {
    // Printing message if chocolate is insufficient
  }
}
```
decideCook explanation;
```C++
void decideCook(String input){
  if(input == "cook"){ // If the input is "cook"
    cook(); // calls the cook() function
  }
  if(input == "flour"){ // If the input is "flour"
    flour++;
  }
  if(input == "chocolate"){ // If the input is "chocolate"
    chocolate++; // increments the chocolate value
  }
  if(input == "eggs"){ // If the input is "eggs"
    eggs++; it increments the eggs value
  }
}
````
coulant explanation;
```C++
void coulant(){
  String input = Serial.readString();
  if(input != ""){ // checks if the input is not an empty string
    input.trim(); // if its not empty it trims an espace
    decideCook(input);
  }
}
````
[project link](https://github.com/JuLiA1o1/J25programming/tree/main/Arduino%202/PROJECT)
