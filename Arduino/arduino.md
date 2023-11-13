# ARDUINO IDE
[0X0E](https://www.arduino.cc/en/software)


## Blink variation 1 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Blink-variation-01.ino)

---
## Blink variation 2 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Blink-variatiom-02.ino)

---
## Codigo Morse ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Codigo_morse.ino)

---
## Functional programming 1 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_1.ino)

---
## Functional programming 2 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_2.ino)

---
## Functional programming 3 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_3.ino)

---
## Functional programming 5 ##

**setup() function**; Serial communication is initialized with a baud rate of 9600. This function runs once when the Arduino is powered up or reset.

```C++
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Initialize serial communication with a baud rate of 9600
}
```
**loop() function**; is the main loop that runs repeatedly on the Arduino. It calls functions to print Morse code for the letters J, U, L, I, and A. After printing the Morse code for each letter, it adds a newline character to separate Morse code representations and introduces a 1-second delay before the loop repeats.

```C++
void loop() {
  // put your main code here, to run repeatedly:
  morseJ();  // Print Morse code for the letter J
  morseU();  // Print Morse code for the letter U
  morseL();  // Print Morse code for the letter L
  morseI();  // Print Morse code for the letter I
  morseA();  // Print Morse code for the letter A

  Serial.println();  // Print a newline character to separate Morse code for different letters
  delay(1000);  // Introduce a 1-second delay before the loop repeats
```
**Separate functions**; (morseJ(), morseU(), morseL(), morseI(), and morseA()) are defined for each letter to make the code modular and readable.
**Example**; morseJ() prints the Morse code for the letter J, which is "dot dash dash dash."

```C++
// Functions to print Morse code for individual letters

void morseJ() {
  morseDot();
  morseDash();
  morseDash();
  morseDash();
  Serial.print("/");
}
```
**Additional functions**; (morseDot() and morseDash()) are defined to print Morse code for dots and dashes, respectively.

```C++
// Functions to print Morse code for dots and dashes

void morseDot() {
  Serial.print(".");
}

void morseDash() {
  Serial.print("_");
}
```

When you run this code, it will continuously print the Morse code representations of the letters J, U, L, I, and A to the serial monitor, with each letter separated by a newline character and a 1-second delay between repetitions.

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_5.ino)

---
## Special message ##

This special message firstly was with the line it's shown above

**Serial.println("special message its gonna to get started in a few seconds");**

but the arduino memory was full as the arduino said;

**Not enough memory; see https://support.arduino.cc/hc/en-us/articles/360013825179 for tips on reducing your footprint.
Error during build: data section exceeds available space in board**

So I decided to deleated and even the space was 97% used as it wasn't full, it worked

### EXPLANATION
**void setup():** This is a function that runs once when the Arduino is powered up or reset. In this case, it initializes serial communication using Serial.begin(9600). The number 9600 is the baud rate, which represents the speed of data transmission.

**void loop():** This is the main function that runs repeatedly as long as the Arduino is powered. It contains the main code that is executed in a loop.

**Serial.println("..."):** This function prints the specified text to the serial monitor. The provided code prints a series of ASCII art messages, creating a stylized visual representation of text. The messages include the "special message" and the name "JULIA PAHISSA."

**delay(1000):** This function introduces a delay of 1000 milliseconds (1 second) before the loop repeats. This delay creates a pause between each set of printed messages.
  
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/rose_special.message.ino)

---
## Cooking system 1 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/cooking_system_1.ino)

---
## Cooking system 2 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/cooking_system_2.ino)

---
## Cooking system 3 COULANT ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/coulant.ino)

---
## Cooking system 4 ##
[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/cooking_system_4.ino)

---
