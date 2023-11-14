# ARDUINO IDE
[0X0E](https://www.arduino.cc/en/software)


## Blink variation 1 ##

**setup() function:**
```C++
void setup() {
pinMode(LED_BUILTIN, OUTPUT);   // This line sets the built-in LED pin (LED_BUILTIN) as an output pin.
digitalWrite(13, 1);            // This turns on the LED by setting the voltage of pin 13 (or LED_BUILTIN) to HIGH.
delay(2000);                    // The program then waits for 2 seconds using the delay() function.
digitalWrite(13, 0);            // This turns off the LED by setting the voltage of pin 13 to LOW.
delay(1000);                    // Another delay of 1 second is added.
}
```
The purpose of the setup is to initialize the LED pin, turn it on for 2 seconds and turn it off for 1 second, and after go to the following step which is the loop()

**loop() function:**
This function since it's a loop it runs continuously

```C++
void loop() {
digitalWrite(13, 1);     // This turns on the LED by setting the voltage of pin 13 to HIGH.
delay(500);             // The program then waits for 0.5 seconds.
digitalWrite(13, 0);   // This turns off the LED by setting the voltage of pin 13 to LOW.
delay(500);           // Another delay of 0.5 seconds is added.
}
```

This part of the code creates a simple blinking effect, with the LED turning on for 0.5 seconds and then turning off for another 0.5 seconds, resulting in a 1-second cycle. The loop continues to repeat, creating a continuous on-off blinking pattern for the LED.

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Blink-variation-01.ino)

---
## Blink variation 2 ##

**setup() function:**
This function since is **setup()** it's only repeated once.

```C++
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(1500);           // wait for 1.5 seconds
  digitalWrite(13, 0);  // turn the LED off by making the voltage LOW
  delay(1000);           // wait for 1 second
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(500);            // wait for 0.5 seconds
  digitalWrite(13, 0);  // turn the LED off by making the voltage LOW
  delay(1000);           // wait for 1 second
```

Light on during 1,5 seconds

Light off during 1 second

Light on during half second

Light off during 1 second

And after this process, followed it's the **loop() function**

**loop() function:**
This function since it's a loop it runs continuously

```C++
void loop() {
  digitalWrite(13, 1);  // turn the LED on (HIGH is the voltage level)
  delay(125);           // wait for 0.125 seconds
  digitalWrite(13, 0);  // turn the LED off by making the voltage LOW
  delay(125);           // wait for 0.125 seconds
}
```
This process will follow the following pathern;

Light on during 0.125 second

Light off during 0.125 second

In summary, the code initializes the LED with a specific flashing pattern during the setup and then enters a loop where the LED continuously blinks with a faster on-off pattern.

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Blink-variatiom-02.ino)

---
## Codigo Morse ##

This program will writte morse code which it's bassed on a secret code represented with dots and dashes

**Morse Code Sequences:**

The loop() function contains sequences of digitalWrite and delay commands to represent Morse code for the letters J, U, L, I, and A using the built-in LED.

Each letter's Morse code is represented by turning the LED on and off with specific durations. For example, the sequence for the letter J is represented by "dot, dash, dash, dash," and the sequence for the letter U is represented by "dot, dot, dash." Similar sequences are repeated for other letters.

The delay(dotDuration *5) represents a space between words, with a longer delay of 5 times the dot duration.

```C++
int dotDuration = 500;       // Duration of a dot in milliseconds

// dot = dotDuration
// dash = dotDuration*3
// end of word = dotDuration*5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);              // Set the built-in LED pin as an output
}

void loop() {
  // J
  digitalWrite(13, 1);
  delay(dotDuration);  // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration);  // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration);   // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration);  // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration*3);  // light off (rest) with a duration of a dash because it's the end of one letter so the gap between letters = light off during 1500 milliseconds

// U
  digitalWrite(13, 1);
  delay(dotDuration); // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration); // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration*3); // light off (rest) with a duration of a dash because it's the end of one letter so the gap between letters = light off during 1500 milliseconds

// L
  digitalWrite(13, 1);
  delay(dotDuration);  // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration);   // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration);   // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration*3); // light off (rest) with a duration of a dash because it's the end of one letter so the gap between letters = light off during 1500 milliseconds

// I
  digitalWrite(13, 1);
  delay(dotDuration);   // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration); // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration);   // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration*3); // light off (rest) with a duration of a dash because it's the end of one letter so the gap between letters = light off during 1500 milliseconds

 // A
  digitalWrite(13, 1);
  delay(dotDuration);   // dot produced = light on during 500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration);  // light off (rest) with a duration of a dot = light off during 500 milliseconds
  digitalWrite(13, 1);
  delay(dotDuration*3); // dash produced = light on during 1500 milliseconds
  digitalWrite(13, 0);
  delay(dotDuration*5); // light off with a duration of 5 dots because it's the end of the word so the final gap = light off during 2500 milliseconds

// space

}
```
In summary, this code demonstrates a simple Morse code display using the built-in LED on an Arduino, with the option to customize the duration of a dot by adjusting the dotDuration variable.

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/Codigo_morse.ino)

---
## Functional programming 1 ##

As a diference between the program before it's that this one is more simplify so it ocupates a smaller space
What it changed it's than instead of doing each dot and dash with the rests of each, we just did a **void** with morseDot that define what's about and another one with morseDash that saying (light is on during 3 dotDuration and off during a dotDuration) which afterwards each time we needed a dot or a dash instead of plogging every specific therm we can type it as a more general thing such as **morseDash** and **morseDot**

```C++
int dotDuration = 500;  // Duration of a dot in milliseconds

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 (usually the built-in LED) as an output
}

void loop() {
  // Morse code for J
  morseDot(); // which is the same as saying: digitalWrite(13, 1); delay(dotDuration); digitalWrite(13, 0); delay(dotDuration);
  morseDash();  // which is the same as saying: digitalWrite(13, 1); delay(dotDuration * 3); digitalWrite(13, 0); delay(dotDuration);
  morseDash();
  morseDash();
  delay(dotDuration * 2);  // Gap between letters

  // Morse code for U
  morseDot();
  morseDot();
  morseDash();
  delay(dotDuration * 2);  // Gap between letters

  // Morse code for L
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  delay(dotDuration * 2);  // Gap between letters

  // Morse code for I
  morseDot();
  morseDot();
  delay(dotDuration * 2);  // Gap between letters

  // Morse code for A
  morseDot();
  morseDash();
  delay(dotDuration * 6);  // Gap between words
}
```
**Helper Functions (morseDot() and morseDash()):**

These functions simplify the code by handling the LED on-off sequences for dots and dashes, respectively.

**morseDot()** turns the LED on for the duration of a dot, then turns it off, creating a dot in Morse code.

**morseDash()** turns the LED on for a duration three times longer than a dot (representing a dash), then turns it off.

```C++
void morseDot() { // void allows us once we define what's about to use it and minimiseze the programming code, it sumarise it instead of repeating it each time 
  digitalWrite(13, 1);  // LED on (dot)
  delay(dotDuration);
  digitalWrite(13, 0);  // LED off
  delay(dotDuration);
}

void morseDash() {
  digitalWrite(13, 1);  // LED on (dash)
  delay(dotDuration * 3);
  digitalWrite(13, 0);  // LED off
  delay(dotDuration);
}
```

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_1.ino)

---
## Functional programming 2 ##

As a diference to **functional programming 1** it's that this one is even more simplify so it ocupates a smaller space
What it changed it's than instead of doing each letter and dots and dashes inside loop, it's in another void. So as we did on the one before writting morseDot and MorseDash in a separate void out of loop but now substracting also the letters to separates voild outside the loop function.

So instead of haveing the specifications of how many dots and dashes have the letter inside the loop, now there's only the letters, so on the loop there's only the morse code word

```C++
int dotDuration = 500;  // Duration of a dot in milliseconds

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 (usually the built-in LED) as an output
}

void loop() {
  morseJ();  // Represent the letter J in Morse code
  morseU();  // Represent the letter U in Morse code
  morseL();  // Represent the letter L in Morse code
  morseI();  // Represent the letter I in Morse code
  morseA();  // Represent the letter A in Morse code
  
  delay(dotDuration * 4);  // Gap between words
}

// Function to represent Morse code for the letter J
void morseJ() {
  morseDot();
  morseDash();
  morseDash();
  morseDash();
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter U
void morseU() {
  morseDot();
  morseDot();
  morseDash();
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter L
void morseL() {
  morseDot();
  morseDash();
  morseDot();
  morseDot();
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter I
void morseI() {
  morseDot();
  morseDot();
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter A
void morseA() {
  morseDot();
  morseDash();
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent a dot in Morse code
void morseDot() {
  digitalWrite(13, 1);  // LED on (dot)
  delay(dotDuration);
  digitalWrite(13, 0);  // LED off
  delay(dotDuration);
}

// Function to represent a dash in Morse code
void morseDash() {
  digitalWrite(13, 1);  // LED on (dash)
  delay(dotDuration * 3);
  digitalWrite(13, 0);  // LED off
  delay(dotDuration);
}
```
**loop function** calls individual functions (morseJ(), morseU(), morseL(), morseI(), and morseA()) to represent the Morse code for the letters J, U, L, I, and A. Each function includes a specific sequence of dots and dashes for the corresponding letter.

Each letter's Morse code is followed by a delay(dotDuration * 2) to introduce a gap between letters.

The delay(dotDuration * 4) at the end of the loop introduces a longer delay between words.

Helper functions morseDot() and morseDash() handle the LED on-off sequences for dots and dashes, respectively.

[link](https://github.com/JuLiA1o1/J25programming/blob/main/Arduino/functional_programing_2.ino)

---
## Functional programming 3 ##

This Arduino sketch continues the theme of displaying Morse code using the built-in LED. 
The code has been modified to use a function called morseBlink for both dots and dashes.
Each letter is represented by a sequence of dots and dashes, with appropriate gaps between them.

**int dotDuration = 500**; This line declares a variable dotDuration and sets it to 500 milliseconds. This variable determines the duration of a "dot" in Morse code.

**pinMode(13, OUTPUT);** In the setup() function, it sets pin 13 as an output. This is often the built-in LED on many Arduino boards.

**void loop():** This is the main part of the program that runs repeatedly. It calls functions to represent each letter in Morse code and introduces a gap between words.

**void morseBlink(int numberofdots)**; This is a generic function that represents a dot or dash in Morse code. It takes the number of dots as an argument, allowing it to represent both dots and dashes. It turns the LED on for a specified duration, then turns it off to create the blinking effect.

**Individual Letter Functions (morseJ(), morseU()...);** Each function represents the Morse code for a specific letter by calling the more generic morseBlink function with different characters.

**Example**(morseJ()):
This function represents the letter "J" in Morse code, which is dot-dash-dash-dash, followed by a gap between letters

```C++
// morseBlink(1) = dot ( 1 blink )
// morseBlink(3) = dash ( 3 blinks )
```
```C++
void morseJ() {
  morseBlink(1);
  morseBlink(3);
  morseBlink(3);
  morseBlink(3);
  delay(dotDuration * 2);  // Gap between letters
}
```

```C++
int dotDuration = 500;  // Duration of a dot in milliseconds

void setup() {
  pinMode(13, OUTPUT);  // Set pin 13 (usually the built-in LED) as an output
}

void loop() {
  morseJ();  // Represent the letter J in Morse code
  morseU();  // Represent the letter U in Morse code
  morseL();  // Represent the letter L in Morse code
  morseI();  // Represent the letter I in Morse code
  morseA();  // Represent the letter A in Morse code
  
  delay(dotDuration * 4);  // Gap between words
}

// Function to represent Morse code for the letter J
void morseJ() { // no need to writte the delays between dot and dashes because is already pointed on the void morseBlink
  morseBlink(1);
  morseBlink(3);
  morseBlink(3);
  morseBlink(3);
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter U
void morseU() {
  morseBlink(1);
  morseBlink(1);
  morseBlink(3);
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter L
void morseL() {
  morseBlink(1);
  morseBlink(3);
  morseBlink(1);
  morseBlink(1);
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter I
void morseI() {
  morseBlink(1);
  morseBlink(1);
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent Morse code for the letter A
void morseA() {
  morseBlink(1);
  morseBlink(3);
  delay(dotDuration * 2);  // Gap between letters
}

// Function to represent a dot or dash in Morse code
void morseBlink(int numberofdots) {
  digitalWrite(13, 1);  // LED on (dot or dash)
  delay(dotDuration * numberofdots);
  digitalWrite(13, 0);  // LED off
  delay(dotDuration);
}

```


In this version, morseBlink is a versatile function that takes the number of dots as the main thing, allowing it to represent both dots and dashes. The loop function then calls this function for each letter, creating the Morse code with appropriate gaps. This modification makes the code more easier to understand.

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
