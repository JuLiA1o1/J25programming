## Tareas clase 5/2
```Java=
/*
 * Test Arithmetic Operations
 */
public class ArithmeticTest {     // Save as "ArithmeticTest.java"
   public static void main(String[] args) {
      int number1 = 98; // Declare an int variable number1 and initialize it to 98
      int number2 = 5;  // Declare an int variable number2 and initialize it to 5
      int sum, difference, product, quotient, remainder;  // Declare 5 int variables to hold results
   
      // Perform arithmetic Operations
      sum = number1 + number2;
      difference = number1 - number2;
      product = number1 * number2;
      quotient = number1 / number2;
      remainder = number1 % number2;
  
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

### EXERCICE 1
Combining Lines 18-31 into one single println() statement

```javascript=

// before
    /* System.out.print("The sum, difference, product, quotient and remainder of ");  // Print description
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
      */
      
// after    
System.out.println("The sum, difference, product, quotient and remainder of " + number1 + " and " + number2 + " are " + sum + ", " + difference + ", " + product + ", " + quotient + ", and " + remainder);
```


### EXERCICE 2
Try printing the sum of 31 times of number1 and 17 times of number2

```javascript=
// way 1
public class Main {    
   public static void main(String[] args) {
   // declarar variables y sus valores
      int number1 = 98; 
      int number2 = 5; 
      int sum = number1*31 + number2*17;

System.out.println ("the result of the sum is " + sum);
}
}
````
```javascript=
 // way 2 
public class Main {     
   public static void main(String[] args) {
   // declare variables and values
      int number1 = 98; 
      int number2 = 5;  
      int sum;
   
     System.out.println ("the result of the sum is " + (sum = number1*31 + number2*17));
   }
}
```
``the result of the sum is 3123``
### EXERCICE 3
program called SumProduct3Numbers with one more int variable called number3 with a value of 77. Compute and print the sum and product of all the three numbers

```javascript=
// way 1
public class Main {     
   public static void main(String[] args) {
   // declarar variables y sus valores
      int number1 = 98; 
      int number2 = 5; 
      int number3 = 77;
      int sum = number1 + number2 + number3;

System.out.println ("the result of the sum is " + sum);
}
}
```
```javascript=
// way 2
public class Main {     
   public static void main(String[] args) {
   // declarar variables y sus valores
      int number1 = 98; 
      int number2 = 5; 
      int number3 = 77;
      int sum;
	  

System.out.println ("the result of the sum is " + (sum = number1 + number2 + number3));
}
}
```
``the result of the sum is 180``
