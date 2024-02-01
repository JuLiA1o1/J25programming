#include "morse.h"
#include "song.h"
#include "coulant.h"
 
void setup() {
 
Serial.begin(9600);
}
 
void loop() {
  readSerial();
}
 
 
void readSerial() {
  Serial.println("Miau");
  if (Serial.available()>0){
  String word = Serial.readString();
  word.trim();
  Serial.println(word);
  Serial.println("Longitud del string: ");
  Serial.println(word.length());
  decide(word);
  }
}
 
void decide (String command){
  Serial.println("hola");
    if (command.equals("play")) {
      play();
      return;
    }
    if (command.equals("stop")){
      stop();
      return;
    }
    if (command.startsWith("morse")){
    // string mensajeParaMorse = command.substring(5);
    morse(command.substring(5));
    }
    if (command.equals("coulant")){
    decideCook("in");
    }
 }
