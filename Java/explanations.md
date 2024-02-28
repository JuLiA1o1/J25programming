# EXPLANATIONS JAVA (exersices)

### AREA TRIANGULO

Este codigo es un paso a paso para como bien dice el titulo calcular la area de un triangulo. Al ejecutarlo se imprimira que la area es 9.35, mientras que el proceso esta definido dentro del mismo programa.
```javascript=
// calcular el area de un triangulo
public class Main {
  public static void main(String[] args) {
	double base, area, altura; // definimos funciones (decimales = double)
    // definimos valores de las funciones
	base = 5.5; 
    altura = 3.4;
    area = base * altura / 2;
    // definimos como queremos que nos imprima el mensaje
    System.out.print ("The area is "); // primero nos escrive "The area is "
    System.out.print (area); // despues imprime el valor de la area
  }
}

//RESULTADO = The area is 9.35
```

### Tareas clase 5/2 (part 10)
Este codigo es un paso a paso para hacer operaciones aritmeticas. Al ejecutar este código, se mostrarán los resultados de las operaciones aritméticas y se imprimirán los valores actualizados de number1 y number2 después de las operaciones de increase y decrease. El proceso esta definido dentro del mismo programa.

```javascript=
/*
 * Test Arithmetic Operations
 */
public class ArithmeticTest {     // Save as "ArithmeticTest.java"
   public static void main(String[] args) {
      int number1 = 98; // Declare an int variable number1 and initialize it to 98
      int number2 = 5;  // Declare an int variable number2 and initialize it to 5
      int sum, difference, product, quotient, remainder;  // Declare 5 int variables to hold results
   
      // Perform arithmetic Operations
      sum = number1 + number2; // Se suma number1 y number2 y se guarda en sum
      difference = number1 - number2; //Se resta number2 de number1 y se guarda en difference
      product = number1 * number2; //Se multiplica number1 por number2 y se guarda en product
      quotient = number1 / number2; //Se divide number1 entre number2 y se guarda en quotient
      remainder = number1 % number2; //  Se calcula el resto de la división de number1 entre number2 y se guarda en remainder
  
      // Print results
      System.out.print("The sum, difference, product, quotient and remainder of ");  // Print description
      System.out.print(number1);      // Print the value of the variable
      System.out.print(" and ");
      System.out.print(number2);
      System.out.print(" are ");
      System.out.print(sum);
      System.out.print(", ");
      System.out.print(difference);
      System.out.print(", ");
      System.out.print(product);
      System.out.print(", ");
      System.out.print(quotient);
      System.out.print(", and ");
      System.out.println(remainder);
   
      ++number1;  // Increment the value stored in the variable "number1" by 1
                  // Same as "number1 = number1 + 1"
      --number2;  // Decrement the value stored in the variable "number2" by 1
                  // Same as "number2 = number2 - 1"
      System.out.println("number1 after increment is " + number1);  // Print description and variable
      System.out.println("number2 after decrement is " + number2);
      quotient = number1 / number2; 
      System.out.println("The new quotient of " + number1 + " and " + number2 
            + " is " + quotient);
   }
}
```
### Tarea clase While java (part 11)

Este programa calcula la suma de todos los números enteros desde 9 hasta 899 utilizando un bucle while, y luego imprime el resultado de esta suma.El proceso esta definido dentro del mismo programa.

```javascript=
/*
 * Sum from a lowerbound to an upperbound using a while-loop
 */
public class Main {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 9;      // Store the lowerbound
      final int UPPERBOUND = 899;   // Store the upperbound
      int sum = 0;   // Declare an int variable "sum" to accumulate the numbers
                     // Set the initial sum to 0
      // Use a while-loop to repeatedly sum from the lowerbound to the upperbound
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         sum = sum + number;  // Accumulate number into sum
         ++number;            // increment number
      }
      // Print the result
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
   }
}
```

### part 12

Este programa calcula la suma de los números impares y la suma de los números pares en el rango del 1 al 1000, y luego imprime estas sumas y la diferencia entre ellas. El proceso esta definido dentro del mismo programa.
```javascript=
/*
 * Sum the odd numbers and the even numbers from a lowerbound to an upperbound
 */
public class OddEvenSum {  // Save as "OddEvenSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sumOdd  = 0;    // For accumulating odd numbers, init to 0
      int sumEven = 0;    // For accumulating even numbers, init to 0
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         if (number % 2 == 0) {  // Even
            sumEven += number;   // Same as sumEven = sumEven + number
         } else {                // Odd
            sumOdd += number;    // Same as sumOdd = sumOdd + number
         }
         ++number;  // Next number
      } 
      // Print the result
      System.out.println("The sum of odd numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sumOdd);
      System.out.println("The sum of even numbers from " + LOWERBOUND + " to " + UPPERBOUND + "  is " + sumEven);
      System.out.println("The difference between the two sums is " + (sumOdd - sumEven));
   }
}
```
