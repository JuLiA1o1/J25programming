# Tarea clase While java
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

1. Modify the above program (called RunningNumberSum1) to sum all the numbers from 9 to 899. (Ans: 404514)

```javascript=
public class Main {  // Save as "RunningNumberSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 9;      // Store the lowerbound, el numero mas bajo por el que empieza
      final int UPPERBOUND = 899;   // Store the upperbound, hasta el numelo que llega
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
``The sum from 9 to 899 is 404514``

2. Modify the above program (called RunningNumberOddSum) to sum all the odd numbers between 1 to 1000. (Hint: Change the post-processing statement to "number = number + 2". Ans: 250000)

```javascript=
public class Main {
  public static void main(String[] args) {
     final int LOWERBOUND = 1;      
     final int UPPERBOUND = 1000;  
     int sum = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;  
        number = number + 2;            
     }
 
     System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sum);
  }
}

```
``The sum from 1 to 1000 is 250000``

3. Modify the above program (called RunningNumberMod7Sum) to sum all the numbers between 1 to 1000 that are divisible by 7. (Hint: Modify the initialization statement to begin from 7 and post-processing statement to increment by 7. Ans: 71071)

```javascript=
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 7;    
     final int UPPERBOUND = 1000;  
     int sum = 0;  
                   
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
         
        sum = sum + number;
        number = number + 7;          
     }
 
     System.out.println("The sum of all the numbers divisible by 7 from 1 to 1000 is: " + sum);
  }
}
```
``The sum of all the numbers divisible by 7 from 1 to 1000 is: 71071``

6. Modify the above program (called RunningNumberSquareSum) to find the sum of the square of all the numbers from 1 to 100, i.e. 1*1 + 2*2 + 3*3 +... (Hint: Modify the sum = sum + number statement. Ans: 338350)

```javascript=
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 100;  
     int sumOfSquares = 0;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
        sumOfSquares = sumOfSquares + (number * number);
        number = number + 1;  
     }
     
 
     System.out.println("The sum of the squares of all the numbers from 1 to 100 is: " + sumOfSquares);
  }
}
```
``The sum of the squares of all the numbers from 1 to 100 is: 338350``


8. Modify the above program (called RunningNumberProduct) to compute the product of all the numbers from 1 to 10(Hint: Use a variable called product instead of sum and initialize product to 1. Modify the sum = sum + number statement to do multiplication on variable product. Ans: 3628800)
```javascript=
public class Main {  
  public static void main(String[] args) {
     final int LOWERBOUND = 1;    
     final int UPPERBOUND = 10;  
 
     int product = 1;  
   
     int number = LOWERBOUND;
     while (number <= UPPERBOUND) {
       
        product = product * number;
        number = number + 1;  
     }
     
   
     System.out.println("The product of all the numbers from 1 to 10 is: " + product);
  }
}
```
``The product of all the numbers from 1 to 10 is: 3628800``
