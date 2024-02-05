# SONAR
![sonar](https://www.navalnews.com/wp-content/uploads/2021/02/RTSYS-SIERA-sonar-calibration-system.jpg)

## SONAR 1

**How many times increase the depth**

```C++
void setup() {
Serial.begin(9600);
int depths[] = {90,85,88,83,82,91,91,100,97}; // depths = profundidades
int increaseDepth = 0;

// way 1
for (int n = 0; n < 8; n++){
  if (depths[n] - depths[n+1] < 0){ // if the first depths - second depths it´s less than 0 next action will be taken
  // depths have to be [<] "less than" 0 because means that the second depths is bigger which that way prove it goes from a smaller to a bigger number = increase
  increaseDepth++;
  }
}

// way 2
for (int n = 1; n <= 8; n++){
  if (depths[n] - depths[n-1] > 0){
  increaseDepth++;
  }
}

}
```
## SONAR 2

```C++
void setup() {
Serial.begin(9600);
int depths[] = {90,85,88,83,82,91,91,100,97}; // depths = profundidades
  //            [0][1][2][3][4][5][6][7][8]
```
increase [n]
```C++
int increaseDepth = 0;

for (int n = 0; n < 8; n++){
  if (depths[n] - depths[n+1] < 0){ // Check if the difference between the current depth and the next one is less than zero
  increaseDepth++;
  }
}
```
reduce [m]
```C++
int reduceDepth = 0;

for (int n = 0; n < 8; n++){
  if (depths[n] - depths[n+1] > 0){ // Check if the difference between the current depth and the next one is more than zero
  reduceDepth++;
  }
}
```

equalize [o]

```C++
int equalizeDepth = 0;

for (int n = 0; n < 8; n++){
  if (depths[n] - depths[n+1] == 0){ // Check if the difference between the current depth and the next one is equal to zero, means there's no variable between them so is same number
  equalizeDepth++;
  }
}
```
ANALISY
```C++
[0]-[1] == 90 - 85 = 5 (reduceDepth)
[1]-[2] == 85 - 88 = -3 (increaseDepth)
[2]-[3] == 88 - 83 = 5 (reduceDepth)
[3]-[4] == 83 - 82 = 1 (reduceDepth)
[4]-[5] == 82 - 91 = -9 (increaseDepth)
[5]-[6] == 91 - 91 = 0 (equalizeDepth)
[6]-[7] == 91 - 100 = -9 (increaseDepth)
[7]-[8] == 100 - 97 = 3 (reduceDepth)
// [n] increaseDepth = 3
// [m] reduceDepth = 4
// [o] equalizeDepth = 1
```

FINAL RESULT (increasedDepth + reduceDepth + equalizeDepth)
```C++
void setup() {
Serial.begin(9600);
int depths[] = {90,85,88,83,82,91,91,100,97}; 

  int increasedDepth = 0;
  int reduceDepth = 0;
  int equalizeDepth = 0;

for (int n = 0; n < 8; n++){

  if (depths[n] - depths[n+1] < 0){ 
  increaseDepth++;
  }
  else if (depths[n] - depths[n+1] > 0){ 
  reduceDepth++;
  }
  else (depths[n] - depths[n+1] == 0){
  equalizeDepth++;
  }
}
```




## SONAR 3
change depths to speed

```C++
void setup() {
Serial.begin(9600);

int depths[] = {90,85,88,83,82,91,91,100,97};
int speeds [] = {0,0,0,0,0,0,0,0,0}; // empty array 

 int increasedDepth = 0;
 int reduceDepth = 0;
 int equalizeDepth = 0;

for (int n = 0; n < 8; n++){
speed [n] = depths[n] - depths[n+1]; // speed [n] = first depth - second depth = diference between both depths

if (speed [n] > 0){ // speed is there substituting "depths[n] - depths[n+1]"
 increaseDepth++;
}
else if (speed [n] < 0){
 reduceDepth++;
}
else{
equalizeDepth++;
}
}
}
```
```C++
//OUTPUT  
// Print the counts of depth changes
Serial.println("Aumento de profundidad" + String(increasedDepth));
  Serial.println("Descenso de profundidad" + String(reduceDepth));
  Serial.println("Misma profundidad" + String(equalizeDepth));
```
 ```C++
// Print speeds
Serial.println("Velocidades:");
for (int n = 0; n < 8; n++) {
Serial.print(speeds[n]);
Serial.print(" ");
  }
}

```

## SONAR 4

```C++
void setup() {
Serial.begin(9600);

int depths[] = {90,85,88,83,82,91,91,100,97};
int speeds [] = {0,0,0,0,0,0,0,0,0}; // empty array 

 int increasedDepth = 0;
 int reduceDepth = 0;
 int equalizeDepth = 0;

for (int n = 0; n < 8; n++){
speed [n] = depths[n] - depths[n+1]; // speed [n] = first depth - second depth = diference between both depths

if (speed [n] > 0){ // speed is there substituting "depths[n] - depths[n+1]"
 increaseDepth++;
}
else if (speed [n] < 0){
 reduceDepth++;
}
else{
equalizeDepth++;
}
}
}
```
```C++
//OUTPUT  
// Print the counts of depth changes
Serial.println("Aumento de profundidad" + String(increasedDepth));
  Serial.println("Descenso de profundidad" + String(reduceDepth));
  Serial.println("Misma profundidad" + String(equalizeDepth));
```
 ```C++
// Print speeds
Serial.println("Velocidades:");
for (int n = 0; n < 8; n++) {
Serial.print(speeds[n]);
Serial.print(" ");
  }
}

```
speed implementation
```C++
for (int n = 1; n < 8; n++){

 // calulate minimum speed
if (speed [n] < minSpeed){
minSpeed = speed [n];
}

//calculate maximum speed
if (speed [n] > maxSpeed){
maxSpeed = speed [n];
}

// add everything
sumSpeeds += speeds [n]
}

// average
int averageSpeed = sumSpeeds / 9; // calcula la nedia de velocidad con el resultado de todas las velocidades sumadas :"entre" el numero de indices
```
