# JAVA

INFORMATION SOURCES
[java introduction](https://www3.ntu.edu.sg/home/ehchua/programming/java/J1a_Introduction.html)
[OOP](https://www3.ntu.edu.sg/home/ehchua/programming/java/J3a_OOPBasics.html)
[W3School](https://www.w3schools.com/java/default.asp)
[W3Schools (check program)](https://w3schools.com/java/tryjava.asp?filename=demo_output)
## VOCABULARY

![image](https://www.greatschools.org/gk/wp-content/uploads/2023/03/Vocabulary-words-Spanish.jpg)
- **statement** = (;)
 ```javascript
 EXAMPLE
 
 System.out.println("hello, world");
````
- **comments** = (/*) ends with (*/)
```javascript
EXAMPLE

/* 
 * First Java program, which says hello.
 */
````
- **block** = enclosed by a pair of braces {}
```javascript
EXAMPLE

public class Hello {
   }
```
- **Java compilation** = public class main {}
```javascript
EXAMPLE
public class PrintTest{
    public statisticvoid main ()...
}
```
- **Variables** = 
   - void = cuando no devuelve nada (no hay return)
    - bool = siempre q hay return true or false
    - int = return numbers
    - double = return decimals
    - string = dice string
 
```java
    EXAPMLE
    double radious, area // double radious & double area
````
- **Programación procedural:**
Se centra en la secuencia de instrucciones para resolver problemas, utilizando funciones y control de flujo. El control de flujo se refiere a la gestión de la ejecución de un programa, determinando el orden en que se ejecutan las instrucciones basadas en condiciones y bucles.
- **Programación orientada a objetos:**
Enfoque de desarrollo de software que utiliza objetos para modelar entidades del mundo real y sus interacciones, permitiendo la modularidad y la reutilización del código.
La modularidad en programación se refiere a la capacidad de dividir un programa en módulos independientes y autónomos, lo que facilita su comprensión, mantenimiento y reutilización.

- **PC** = **P**ersonal **C**omputer
- **GUI**: Graphic user interface
- **CLI**: Interfaz de la línea de comandos
- **OOP**: Object-oriented programming is about creating objects that contain both data and methods
- **Final**: means that this value shall not be changed during execution.
- **Abstraction** = NO fijarse en los detalles sino en el concepto general

HIGH LEVEL = general abstraction
LOW LEVEL = specific abstraction


```javascript
EXAMPLE
5+5 = 10 // da igual si son papatas o animales, lo que importa es el concepto general, lo que serian los NUMEROS
```
- **Interface** = manera de comunicarte

- **dependencia** = objeto llama a otro

 - **imagen 3D** = creada por triangulitos

![3D](https://img2.rtve.es/im/6885386/?w=900)
---
### First java program
```javascript=
/* 
 * First Java program, which says hello.
 */
public class Hello {   // Save as "Hello.java"
   public static void main(String[] args) {  // Program entry point
      System.out.println("hello, world");    // Print text message
   }
}
```




### Simplification example
![](https://www.shutterstock.com/image-vector/complex-simple-simplification-optimization-process-260nw-2039998430.jpg)
```java=

System.out.println("The radius is " + radius + "The area is " + area + "The circumference is " + circumference);
/*
      System.out.print("The radius is ");  // Print description
      System.out.println(radius);          // Print the value stored in the variable
      System.out.print("The area is ");
      System.out.println(area);
      System.out.print("The circumference is ");
      System.out.println(circumference);
 */

```
### Object oriented porgramming (OOP)

- **class** = object
:::success
DIFERENCE
- **metodo =** lo que puede hacer, una instancia, la acción
- **variable =** caracteristicas del objeto
::::

- **object (structure)**
    - **nombre**
    - serie datos (**variables**)
    - serie de metodos/funciones/suprogramas para llamar (**metodo**)


```javascript=
EXAMPLE

public class Circle {        // class name
   double radius;            // variables
   String color;
   
   double getRadius() { ...... }  // methods
   double getArea() { ...... }
}
```

```javascript=
EXAMPLE diagrama UML

//Class (uppercase)
Coche

//variable (lowercase)
int numeroPuertas

//metodo (lowercase and uppercase)
voidAcceleracion()
```
![Imatge de WhatsApp 2024-02-21 a les 16.48.47_47bc6d3c](https://hackmd.io/_uploads/rJsjicm2a.jpg)


![Imatge de WhatsApp 2024-02-21 a les 16.50.56_c1591953](https://hackmd.io/_uploads/HJElh57n6.jpg)


- **Objectives of OPP:**  modularity. code can be easily reused in different projects
```javascript=
EXAMPLE
cancion, algoritmo cancion + datos
```



```javascript=
Rectangle rectangle = new Rectangle();
// class  variable       constructor
```




constructor= same that class

- **public =** puede acceder todo el mundo
- **instanciar =** generar elemento general
statics= puedes llamarlos sin crear ninguna instancia extra
- **final**= constante que no se puede canviar

- **pointer & null =**
Variables don't hold "directly" the data that we're looking for. They have the ***address*** (**the pointer**) of where de data is. If there is **NO** ***address*** to any part of the virtual memory the value is **null**.

**EXAM NOTES**

![i](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT6VRZ-c8U501Nv7a6F8V8kEJT99mewP5Xr0tuZosVIyr0M7JntzY4t4Tz9926AqSglPLQ&usqp=CAU)

![Imatge de WhatsApp 2024-02-28 a les 11.10.49_fcf32018](https://hackmd.io/_uploads/rkI6vFh2p.jpg)






# JAVA 2

- **parameter** = lo que mandamos a una funcion
- **Variable local**= variable con sentido solo en una parte del codigo
- **modulo** =
```javascript=
EJEMPLO; LEGO
```
- **private** = only class can access
- **public** = all parts of code can access
```javascript=
EJEMPLO

cuentaBancaria
private double saldo;
    public depositar(){
        
    }
public getSaldo(){
    return getSaldo()
}
```
```javascript=
EXAMPLE

public class Validator{
    public static bool validateEmail (String email){

    }
}

// class Client (separate from the main code)
public void set Email (string email){
    if (Validator.validateEmail(email)){
        this.email = email;
    }
}
```
- **variables** =
    - before (int, string...)
    - now objects

```javascript=
  Circle circle1 = new Circle();
```

``Circle`` is the **Object** type that we have access to (Circle.java)
``Circle1`` is the **identifier** of that object
new is the keyword to call constructors
``Circle()`` is a **special method** of the class 
``Circle`` called constructor that is going to be executed when we create this instance

- **explicito** = decir algo directamente y claro 
    - como el sujeto en castellano, se ve lo que se quiere referirse
- **implicito** = decir algo de forma indirecta
    - como el sujeto eliptico en castellano, esta pero no lo ves
- **static** = mismo valor para todas las instancias
    - solo hay uno, se comparte con todos los codigos

 ![](https://hackmd.io/_uploads/BJ-AGnVnp.jpg)
```javascript=
EJEMPLO
PI (3.14159265359...)
````
```javascript=
EJEMPLO

alumno Julia(){
    numberPersons
}

alumno Pablo(){
    numberPersons
}

// as they are in the same place el numero de personas son las mismas por lo que el numero de personas va a ser el mismo para los dos alumnos
```
- **dinamic** = valor distinto en cada instancia
- **final** = NO change, variable que no canvia
- **setter** = cambian valor almacenado de la variable/objeto
- **getter** = devuelven valor almacenado de la variable/objeto
- **constructor** = metodo al que llamamos cuando queremos una instancia
- **consistencia** = siempre igual
#### tipos de composicion
- dependencia
```javascript=
EJEMPLO
classe A usa B
```
- agregacion
```javascript=
EJEMPLO
classe A tiene B
```
- herencia
```javascript=
EJEMPLO
classe A és B
```
![image](https://hackmd.io/_uploads/Hy8dvBnTa.png)

---
```javascript=
Potato potato new potato
//(classe) (instancia) () (constructor)
```

```javascript=
EXAMPLE

puublic class Triangle {
int p1x;
int p1y;
int p2x;
int p2y;
int p3x;
int p3y;
 
    // EXAMPLE 1 (constructor)
    public Triangle(int p1x, int p1y, int p2x, int p2y, int p3x, int p3y) {
    }
 
    // EXAMPLE 2 (constructor)
    public Triangle(int p1x, int p1y, int alpha, int side1, int beta, int side2) {
 
 
    }
    
}
```
#### **ESTURCTURA** 
```javascript=
    public void setBiggerSide(int biggerSide){ 
        //[setBiggerSide]metodo
        //[(int biggerSide)]parameter
        this.biggerSide = biggerSide; 
        //[this.biggerSide] variable de la clase
```



### object in Java
```javascript=
public class MyObject { //MyObject goes with PascalCase
	private int variable1; //names with camelCase
	private boolean adjetive1; 
	private String variable2;
	//all variables private by default
	//only use static or final if we need to. 
	
	public MyObject() {
		this.variable1 = 2; //default valu
		this.adjetive1 = true; //default value
		this.variable2 = "default"; //default value	
        // [this] se refiere siempre a la instancia
	}
	//constructor with no parameters and set default value
	public MyObject(int x, boolean y, String z) {
		this.variable1 = x; //input value
		this.adjetive1 = y; //input value
		this.variable2 = z; //input value
	}	
	// getters and setters methods
	// accessor and mutators methods
    
	// accessors
	public int getVariable1() {
		return this.variable1;
    }
	
	public boolean isAdjective1(){
		return this.adjetive1;
	}
	
	public String getVariable2() {
		return this.variable2;
    }
	
	// mutators 
	
	public void setVariable1(int x) {
		this.variable1 =  x;
	}	

	public void setAdjetive1(boolean newAdjective1) {
		this.adjetive1 =  newAdjective1;
	}	
		
	public void setVariable2(String x) {
		this.variable2 =  x;
	}
}
```
## OPP = 
#### MODULARIDAD
![lego](https://bbmundo.com/wp-content/uploads/2022/08/beneficios-de-jugar-con-lego-bbmundo-2022.jpg)
elememtos que se pueden reaprobechar, piezas para encajar en diferentes esturcturas

```javascript=
public void testUsingSimpleRegex (){
    emailAdress = "username@domain.com";
    regexPattern = "^(.+)@(\\S+)$";
    assertTrue(EmailValidation.patternMatches(emailAdress,regexPattern));
}
```

ACCESS MODIFIERS

-

### class trappezio (PAS0 A PASO)
![](https://eluniversomatematicoblog.files.wordpress.com/2017/11/trapecio_isosceles.png?w=300)
```javascript=
public class Trapeze {
    
    int biggerSide;
    int smallerSide;
    String colour;
    double height;
    
    public Trapeze (){
        this.biggerSide = 7;
        this.smallerSide = 2;
        this.colour = "red";
        this.height = 4;
    }
    
    public Trapeze (int biggerSide, int smallerSide, int colour, int height ){
        
    }
    
    
    
    //getters (devuelven valor almacenado de la variable/objeto)
    public int getBiggerSide(){ // se añade a las variables un get porque son getters
        return this.biggerSide;
    }
    public int getSmallerSide(){
        return this.smallerSide; // primera letra minuscula porque no es una classe
    }
    public String getColour(){ 
        return this.colour;
    }
    
    public int getHeight(){ 
        return this.height;
    }
    
    
    //setters (cambian valor almacenado de la variable/objeto)
    
    public void setBiggerSide(int biggerSide){ // [setBiggerSide]metodo[(int biggerSide)]parameter
        this.biggerSide = biggerSide; // [this.biggerSide] variable de la clase
    } 
    public void setSmallerSide(int smallerSide){ 
        this.smallerSide = smallerSide;
    } 
     public void setColour(String colour){ 
        this.colour = colour;
    } 
     public void setHeight(int height){ 
        this.height = height;
    } 
    
}
```

```javascript=
// class Main java
// [Book]classe [libro1]nombre [new]define que lo que viene despues es un constructor [Book]constructor (mismo nombre que la classe)
Book libro1 = new Book ("Don Quijote","Cervantes", "680","89",false)
//class book
private String title; 
private String author;
private int pagesNumber;
private String ISBN;
private boolean Korean;
```
``Book libro1 = new Book ()``

``[Book]``classe 
``[libro1]``nombre 
``[new]``define que lo que viene despues es un constructor 
``[Book]``constructor (mismo nombre que la classe)

```javascript=
BOOK different context

// context of library
String = title
String = author
String = ISBN
String = genero
boolean = lended
lending[] = lendingHistory
Library = location

// context of bookstore
String = title
String = author
String = ISBN
String = genero
double = price
boolean = promotion
String = section // section of the bookstore

//context of minecraft
Point = position // object to store a position X,Y,Z and the rotation
String = title
String = content
MinecraftUser = author
int = pages
```
```javascript=
CAR

//Lending store
double: price
boolean: promotion
String: brand
boolean: secondHand
String[] = extras // [] significa que hay mas de uno
String: category
int: consumption
int: power
String: colour
 
 
//Car workshop
String: plate //registration plate
Client: owner 
String: problems
String: brand
String: model
String: dateOfArrival
 
//Car in GTA
String: plate
String: model
Point: place 
int: spawnRate
long: value
int: healthPoints
```
EXERCIICE
```javascript=
ELECTRIC DEVICES

// iPhone
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: secondHand
boolean: MobileData

// iPad
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: secondHand

// Computer
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: secondHand
boolean:LEDsTeclado

```
```javascript=
PHONE

// personal use
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: personalEmail

// business use
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: businesslEmail

// school use
String: brand
String: model
String: color
int: storageCapacity
double: pantallaSize
boolean: businesslEmail
boolean: VPN
String[]: educativeApps

```
### :warning:CAUTION:warning: 
uppercase & lowercase uses
```javascript=
MAYUSCULAS
Moto // objeto/classe
String

MINUSCULAS
boolean
int
double
...
```

## POO (programacion orientada  objetos)
**Objetivo** = ordenar codigo
- colaborar
- reutilizar

**conceptos** = 
- modularidad : dividir el codigo en cajitas/modulos
![image](https://hackmd.io/_uploads/B1MIZV3ap.png)


- encapsulacion (optativo)
![image](https://hackmd.io/_uploads/SJktW4n6p.png)
---
![image](https://hackmd.io/_uploads/HJyJMrnap.png)
**Book** is a...
- comic
- magazine
---
**getters** = accesos
**setters** = mutators

**private** = solo la calse puede acceder al metodo

**[].length =**
```javascript=
int[] number = (....)
for (int i = 0; i < numbers.length; i++) // tiene que encontrar un numero dentro de un libro, busca entre todos (por eso el for)
```
:::warning
``null`` = **NOT** same to = 0 (zero)
:::
---
### findAuthorInLibrary (exercise)
In this case we're going to implement the method `` findAuthorInLibrary`` that will find a book in array of the library of the deparment with the author as a parameter. If it finds something that has the author is going to return true, if not it's going to return false.
 

```javascript=
public Book findAuthorInLibrary (String author){
    for (int i = 0; i < library.length ;i ++) {
        if (findAuthorInLibrary){
            return true
        }
            return false
    }
}
```
:::success
RIGHT ANSWER
```javascript=
public boolean findAuthorInLibrary (String author){
    for (int i = 0; i < library.length ;i ++) {
        if (library[i].getAuthor().equals(author))){
            return true;
        }
    }
    return false;
}
```
:::
###  findStartingAuthor (exercise)
In this case we're going to get introduced to a method that you will need to use in the final method.

In this case startsWith(string test) is a method that will return true if the string starts with that test string and false otherwise.
```javascript
String myStr = "Hello";
System.out.println(myStr.startsWith("Hel"));   // true
System.out.println(myStr.startsWith("llo"));   // false
System.out.println(myStr.startsWith("o"));     // false
````
reference: https://www.w3schools.com/java/ref_string_startswith.asp

findStartingAuthor is a method that is going to return if there is at least one book with the name or the start of the name that you wrote as a parameter.

You should use the method startsWith in your solution.
```javascript=
public boolean startsWith(String test){
     for (int i = 0; i < library.length ;i ++) {
         if(book[i])
}
````
## HARDWARE & SOFTWARE


**HARDWARE** = se puede modificar
**SOFTWARE** = NO se puede modificar

**esquema Von Neumann**

![](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e5/Von_Neumann_Architecture.svg/1200px-Von_Neumann_Architecture.svg.png)

:::success
GREEN  PART = program
:::

### Tipos cmputadoras
servidor
protatil
torre
movil
smartwatch
calculadora
consolas 
TV
electrodomestico (microondas)
aire condicionado
router (wiffi)

![](https://media3.giphy.com/media/DBW3BniaWrFo4/200w.gif?cid=6c09b952193zq8fr2mhcmvzvstoldd66k0g2mrffyz8z7qwa&ep=v1_gifs_search&rid=200w.gif&ct=g)

---
**MICROCONTROLADOR** = placa / circuito con **baja capacidad proceso**
![](https://thelogisticsworld.com/wp-content/uploads/2023/05/placa-de-circuito-electronico.jpg)
```javascript
// ordenadores muy muy sencillos
EJEMPLO
arduino
calculadora basica
````
---
### RECURSOS (capacidades) de un  ordenador

- capacidad procesado
    - CPU (**c**entral **p**rocessing **u**nit) = calculos muy complejos muy rapidos
    - GPU (**g**raphic **p**rocessing **u**nit) = muchos calculos sencillos
- memoria 
    - primaria
    - secundaria
- ancho de vanda - velocidadde comunicacion
    - entre dos ordenadores
    - entre piezas de un mismo ordenador

---
NUMEROS BINARIOS

1bit = nucleo de informacion // **2 possibles valores**
8bits = 1byte // **$2^8$ possibles valores**
  
:::warning
bit = **b**
byte = **B**
:::
:::info
termina en 0 = par
termina en 1 = impar
::::
````java
// elevar el bit sobre el numero dos 
1bit = 2 valores posibles // 2^1= 1
2bits = 4 valores posibles // 2^2 = 4
3bits = 8 valores posibles // 2^3 = 8
4bits = 16 valores posibles // 2^4 = 16
    ...
8bits = 256 valores posibles // 2^8 = 256
````
![image](https://hackmd.io/_uploads/rkikEt7bR.png)
:::info
**MULTIPLOS**
1KB (kilo byte) = $2^{10}$ = 1024 bytes
1MB (mega byte) = $2^{20}$ bytes  = $2^{23}$ bits // posibilidades = $2^{(2^{23})}$
1GB (giga byte) = $2^{30}$ bytes  = $2^{33}$ bits // posibilidades = $2^{(2^{33})}$
1TB (tega byte) = $2^{40}$ bytes  = $2^{43}$ bits // posibilidades = $2^{(2^{43})}$
:::
:::warning
**EJERCICIO**
Posibles valores en un discoduro que guarda 1,44MB
:::warning
 **b** = bit
 **B** = byte
 
1,44 · $2^{20}$(B) · $2^3$(b) = 1,44 · $2^{23}$ = 
:::warning
$2^{(1,44 · 2^{23})}$ posibilidades
:::

---
#### VENTAJAS & INCONVENIENTES BINARIO (vs DECIMAL)
- facil hacer circuito electronico binario
``(/) = 0 //
(_) = 1``
- operaciones aritmeticas son **largas & sencillas**
- numeros en binario **largos** = dificulta uso humanos
``1000(decimal) = 1111101000(binario)``
---
**REGISTRO** = razon por la que hay "0" a la izquierda
![image](https://hackmd.io/_uploads/SktSPdwZR.png)

- mas habitual = BYTE
    - bit
        - unidad de infotmacion (0 & 1)
        - 1 byte = 8 bits
            **EJ** 64 bits = 8 bytes (64 : 8 = 8)

---
### CONVERSION (binario, decimal, octal, hexadecimal)

| BINARIO | DECIMAL | OCTAL | HEXADECIMAL |
|:-------:|:-------:|:-----:|:-----------:|
|  00000  |    0    |   0   |      0      |
|  00001  |    1    |   1   |      1      |
|  00010  |    2    |   2   |      2      |
|  00011  |    3    |   3   |      3      |
|  00100  |    4    |   4   |      4      |
|  00101  |    5    |   5   |      5      |
|  00110  |    6    |   6   |      6      |
|  00111  |    7    |   7   |      7      |
|  01000  |    8    |  10   |      8      |
|  01001  |    9    |  11   |      9      |
|  01010  |   10    |  12   |      A      |
|  01011  |   11    |  13   |      B      |
|  01100  |   12    |  14   |      C      |
|  01101  |   13    |  15   |      D      |
|  01110  |   14    |  16   |      E      |
|  01111  |   15    |  17   |      F      |
|  10000  |   16    |  20   |     10      |
|  10001  |   17    |  21   |     11      |
|  10010  |   18    |  22   |     12      |
|  10011  |   19    |  23   |     13      |
|  10100  |   20    |  24   |     14      |

![10001100011 (1)](https://hackmd.io/_uploads/SJKoGIq-0.png)

#### PRACTICA

![DECIMAL hexadecimal y binario](https://hackmd.io/_uploads/Hk83E85W0.png)

memoria primaria = directo a la cpu (ej. RAM)

---

## LENGUAJES del MARCADO

- classificar la informacion en ETIQUETAS(tags)
:::info
HTML (HIPER TEXT MARKUP LENGUAGE)
XML``<nombre>contenido</nombre>``
:::
pagina HTML --> HTML5(2010)
``<!DOCTYPE html>``
``<HTML>``
``<HEAD>``
``<TITLE>``mi pagina
``</TITLE>``
``</HEAD>``
``<BODY>``
mi primera pagina
``</BODY>``
``</HTML>``
:::warning
<...> = abrir
</...> = cerrar
:::

---

identado los espacios antes de la line

- texto identado
- texto sin identar

 ![Imatge de WhatsApp 2024-05-06 a les 09.35.58_90477429](https://hackmd.io/_uploads/By4L0ZIMR.jpg)




<!DOCTYPE html>
<html>
<head>
<title>Tags html</title>
</head>
<body>

<h1>Tags html</h1>

<h3>1. Headings:</h3>
<h1>H1</h1>
<h2>H2</h2>
<h3>H3</h3>
<h4>H4</h4>
<h5>H5</h5>
<h6>H6</h6>

<hr>

<h3>2. HTML links are defined with the "a" tag:</h3>
<a href="https://www.youtube.com/watch?v=hN_q-_nGv4U">My favorite song for at moment</a>

<hr>

<h3>3. HTML images are defined with the "img" tag:</h3>
<p>My favorite art work:</p>
<img src="https://wp.es.aleteia.org/wp-content/uploads/sites/7/2021/01/WEB3-HANDS-CREATION-Creation_of_Adam_Michelangelo_Detail-PD.jpg?w=640&crop=1" alt="W3Schools.com" width="400" height="200">

<hr>

<h3>4. HTML buttons are defined with the "button" tag:</h3>
<button>Click here</button>

<hr>

<h3>5. List</h3>
<h4>An Unordered HTML List</h4>

<ul>
  <li>CPU</li>
  <li>RAM</li>
  <li>CD</li>
</ul>  

<h4>An Ordered HTML List</h4>

<ol>
  <li>wake up</li>
  <li>wash my face</li>
  <li>breakfast</li>
</ol> 

<hr>

<h3>6. Paragraphs</h3>

<p>This is a paragraph.</p>

<p>
This paragraph
contains      a lot of spaces
in the source     code,
but the    browser 
ignores it.

</p>
<h4>with line breaks "< br >": </h4>

<p>  
My Bonnie lies over the ocean.
<br>
 My Bonnie lies over the sea.
<br>
My Bonnie lies over the ocean.
</p>


<h4>with"< pre >":</h4> <p>(preserves both spaces and line breaks)</p>

<pre>
   My Bonnie lies over the ocean.

   My Bonnie lies over the sea.

   My Bonnie lies over the ocean.
</pre>


<hr>

<h3>7. Styles</h3>

<p>I am normal</p>
<p style="color:red;">I am red</p>
<p style="color:blue;">I am blue</p>

<p>I am <sup>superscripted</sup></p>
<p>I am <sub>subscripted</sub></p>
<p><q>I am a quote</q></p>

<p><del>I am deleated</del></p>
<p><mark>I am marked</mark></p>
<p><b>I am bold</b></p>
<p><u>I am underlined</u></p>
<p><i>I am cursvie</i></p>
<p style="font-family:courier;">This is a courier font</p>
<p style="text-align:center;"> I am a centered paragraph.</p>
<p style="font-size:50px;">This is a 50px font-size</p>
<p style="font-size:10px;">This is a 10px font-size</p>

<hr>

<h3>8. Background colour</h3>

< body style="background-color:blue;" >

<hr>

<meta charset = "UTF8"> = para que los signos extra como las tildes se puedan usar
</body>
</html>
    
---

### Pagina web (estatica o dinamica)
    ESTATICAS(HTML, CSS, JavaScript) = se actualizan en cada nuevo desarollo (despliegue = deploy)
    DINAMICAS = se generan nuevas en cada llamada
 :::info 
diferencia= páginas web estáticas, que muestran el mismo contenido para todos los usuarios, las páginas web dinámicas pueden personalizarse y cambiar en tiempo real
:::
    
--------
    
#### tipos archivo:
1. HTML
    - marcado y texto
    - lineas generales de la pagina
    - tiene tags
2. CSS
    - cascade style sheet
    - estilos (formato)
3. JavaScript
    - lenguaje de programacion 
    - Tiene bucles, objetos y funciones
    
:::info
JavaScript lenguaje bajamente tipado
:::
---

### Redes
**Arquitectura**
    ``cliente - servidor``
- ordenador cliente
    - peticiones / request (URL) unit resource location
    
    **ENLACE vs URL:**


    - **enlace** puede poner "pulsa aqui"
    - **URL** NO tiene lo de "pulsa aqui" porque el enlace te lleva al URL
    
![image](https://hackmd.io/_uploads/S1XY6oiXA.png)

:::warning
URL
![MicrosoftTeams-image (1)](https://hackmd.io/_uploads/r1_ofecMA.jpg)

dominio = IP(internal protocol adress) 
        4 o 6 numeros de 0 a 255
    **EJ** 212239.11.38
:::
**Para traducir** 
- dominios con **IP**(listado de dominios con sus IP) necesitan un **DNS** (domain name server)
    
---
### INTERNET vs WWW
    ![image](https://hackmd.io/_uploads/HyDjnojmA.png)

- **Internet** = red fisica de ordenadores conectados = ``hardware``
        - wifi 
- **www** (world wide web) = recursos almacenados en internet = ``software & datos``

    ![image](https://hackmd.io/_uploads/HJEMO4JXC.png)
**ARQUITECTURA**
    ![image](https://hackmd.io/_uploads/S144nisQC.png)

    **servidor - cliente** (no solo en internet, aplicable en otras conecciones) = como se conectan + comunican entre maquinas
    ``query = question``
    
    **PROTOCOLO** = reglas & convenciones en la comunicacion
    - enlace
    - pagina
        - https:// ( hyper, text, transfer rpotocolo securety)
    
![image](https://hackmd.io/_uploads/HJPLuEJ7R.png)


    
**P2P** (peer to peer = puerto a puerto)
    - descentralizada
    
![image](https://hackmd.io/_uploads/Hkacd4JXC.png)

---
    
### hardware de redes
    - acces point = solo WIFI (extensor)
    - switch = conectar por CABLE diferentes ordenadores (mayor estabilidad)
   
RJ45 ![image](https://hackmd.io/_uploads/HJsRcEymA.png)

    - router = enrutar + puerta enlace entre redes 
    
**wifi** = senyal por aire

**RECURSOS en INFORMATICA**
    - procesado
    - ancho de banda
    - memoria
    
   **NAVEGADORES**
    ![image](https://hackmd.io/_uploads/B1ZAijsmC.png)

no dependen de chronium
    - electron ( whatsapp)
    - chrome
    - edge
    - opera

**LLAVERO** (generador unico)
    ![image](https://hackmd.io/_uploads/HycKisoXA.png)

    - aplicacion dedicada
    - sincronizar
    
 **STATUS SILICON VALEY** (empresa inovadora de reciente creacion)  
    ![image](https://hackmd.io/_uploads/SJqrsjjQR.png)

    . uber
    . air BnB
    . google
    . open IA
    
    

    enmiendacion = empiezan veindiendote la moto, producto super bueno calidad precio, luego bajan calidad del producto o suben precios.
    
---
### PAGINA WEB DINAMICA FUNCIONAMIENTO (se regenera automaticamente)
**EJ**: youtube, (hacen html a tu gusto)
![image](https://hackmd.io/_uploads/SJ2xfVm7A.png)

**CGI** = otras aplicaciones que es lo que tiene que responder/devolver
**BBDD** = base de datos
**Full stack** = tanto front como back stage
    - framwork
    - desarrollador
    
![image](https://hackmd.io/_uploads/BkEecojmA.png)

### PAGINA WEB ESTATICA FUNCIONAMIENTO 
![image](https://hackmd.io/_uploads/rJWpZEXXA.png)

    
**IT** = informatica & telecomunicaciones
    
------
    
### DESARROLLO & MANTENIMIENTO (software)
**project manager** =se encarga de organizar el proceso para crear el programa
**desarrollo web:**
    - front end ( lo que ve le usuario)
    - back end ( lo que no ve)
    - full strack (todo)

 ----  

    
![image](https://hackmd.io/_uploads/rJAtKos70.png)

 
    -------
    
    DESARROLLO WEB = Programador (pica codigo) = analista (revisa + diseña) = aruqitecto de software (traza lineas maestras)
   -  arquitecto = decide trabajar con hardware pithon...
    
**QA** (quality assurance / departamento de calidad) = revisar el programa = decir si esta en el equilibrio o no ( si un personaje esta muy por encima de los otros no habra equilibrio, todos lo querran) 
    - no tienen porque programar = programan para facilitarse la revision de los tests
    
----


### SISTEMAS
![image](https://hackmd.io/_uploads/H1xsdijXA.png)

**DBA** (data base admin / gente mantenimiento)
- sysop (system operative) NO desarrollo SI sistema
(dentro de BBDD (base de datos))
    
**persona sistemas**
- despliegue (deploy) = instala/actualiza software
- redes = organiza las redes (hardware)
- operadores = responsabilidad mas reducidas ( no contactar con las camaras de seguridad mientras que sistemas si)

**3D**
    ![image](https://hackmd.io/_uploads/ryvrOjomR.png)

- modeladores (crean el modelo)
- rigging (pone los esqueletos para diseñar)
- VFX = efectos especiales (pequeñas animaciones/sonidos(ej. sonido monedas))
   
    -------
### ENTORNOS

![image](https://hackmd.io/_uploads/ByZHlN77C.png)

   **EJ** 
![image](https://hackmd.io/_uploads/S1JSfN770.png)
