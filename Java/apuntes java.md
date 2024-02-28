# JAVA
[W3Schools (Java)](https://w3schools.com/java/tryjava.asp?filename=demo_output)
## VOCABULARY
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

### first java program
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

**EXAM NOTES;**
![Imatge de WhatsApp 2024-02-28 a les 11 10 49_6b252c5b](https://github.com/JuLiA1o1/J25programming/assets/144991153/43767532-9dca-405a-8c3a-944111212208)
