void setup() {
  Serial.begin(9600);

  String originalString = "webi wabo";
  Serial.print("String Original: ");
  Serial.println(originalString);

  originalString = swapFirstTwoLetters(originalString);

  Serial.print("After swapping first 2 letters: ");
  Serial.println(originalString);
}

void loop() {}


String swapFirstTwoLetters(String str) {
  if (str.length() >= 2) {
    char temp = str[0];
    str[0] = str[1];
    str[1] = temp;
  }
  return str;
}