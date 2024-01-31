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
