# PART 12
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
1. Write a program called ThreeFiveSevenSum to sum all the running integers from 1 and 1000, that are divisible by 3, 5 or 7, but NOT by 15, 21, 35 or 105.

```javascript=
public class ThreeFiveSevenSum{  // Save as "OddEvenSum.java"
   public static void main(String[] args) {
      final int LOWERBOUND = 1;
      final int UPPERBOUND = 1000;
      int sumIntegers  = 0;    // For accumulating sum of numbers, init to 0

      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            // number = LOWERBOUND, LOWERBOUND+1, LOWERBOUND+2, ..., UPPERBOUND for each iteration
         if (number % 3 == 0 || number % 5 == 0 || number % 7 == 0) {  // si es divisible entre 3, 5 0 7 ...
         if (number % 15 == 0 || number % 21 == 0 || number % 35 == 0 || number % 105 == 0){
             
        }
         sumIntegers += number;    
         }
          
          else {               
         }
          
         ++number;  // Next number
      } 
      // Print the result
      System.out.println("The sum of the integers numbers from " + LOWERBOUND + " to " + UPPERBOUND + " is " + sumIntegers);
   }
}
```
``The sum of the integers numbers from 1 to 1000 is 272066``

2. Write a program called PrintLeapYears to print all the leap years between AD999 and AD2010. Also print the total number of leap years. (Hints: use a int variable called count, which is initialized to zero. Increment the count whenever a leap year is found.) 
