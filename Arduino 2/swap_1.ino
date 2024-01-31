void setup() {
  Serial.begin(9600);

  String originalString = "webi wabo";
  Serial.print("String Original:: ");
  Serial.println(originalString);

  // Swap the 'a' and 'i'
  originalString = swapAandI(originalString);
  Serial.print("After swapping 'a' and 'i': ");
  Serial.println(originalString);
}

void loop() {}

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