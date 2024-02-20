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

RIGHT ANSWER

way 1:
```javascript=
public class Main {
  public static void main(String[] args) {
     final int limiteInferior = 1;
      final int limiteSuperior = 1000;
      int sum  = 0;    // For accumulating odd numbers, init to 0
 
      int number = limiteInferior;
      while (number <= limiteSuperior) {
      // divisible by 3, 5 or 7, but NOT by 15, 21, 35 or 105.
		if ( (number % 3 == 0) || number % 5 == 0  || number % 7 == 0 )   {
         if ( number % 15 != 0 && number % 21 != 0 && number % 35 != 0 && number % 105 != 0){ // tenia que poner "!=" porque sino no seria como lo que pide
         	sum += number; // esta parte tenia que estar dentro del if
         }
        }
        number++;  // Next number
      } 
      // Print the result
      System.out.println("The sum of these numbers from " + limiteInferior + " to " + limiteSuperior + " is " + sum);
 
   }
}
```
``The sum of the integers numbers from 1 to 1000 is 210453``
way 2:
```javascript=
public class Main { 
public static void main(String[] args) {
int sum = 0;
int n = 0;
for (n = 1; n<=1000; n++){
	if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0){
      if (n % 15 != 0 && n % 21 != 0 && n % 35 != 0 && n % 105 != 0){
      	sum += n;
      }
    }
}
System.out.println( "The sum of the integers is " + sum);   
}
}
````
2. Write a program called PrintLeapYears to print all the leap years between AD999 and AD2010. Also print the total number of leap years. (Hints: use a int variable called count, which is initialized to zero. Increment the count whenever a leap year is found.)

```javascript=
public class Main {
  public static void main(String[] args) {
     final int limiteInferior = 999;
      final int limiteSuperior = 2010;
      int counter  = 0;    
 
      int number = limiteInferior;
      while (number <= limiteSuperior) {
		if ( number % 4 == 0) 
         {
         	counter++; 
			System.out.println(number + "AD");
         }
        number++;  // Next number
      } 
      // Print the result
      System.out.println("Total number of leap years " + counter);
 
   }
}
```
``1000AD
1004AD
1008AD
1012AD
1016AD
1020AD
1024AD
1028AD
1032AD
1036AD
1040AD
1044AD
1048AD
1052AD
1056AD
1060AD
1064AD
1068AD
1072AD
1076AD
1080AD
1084AD
1088AD
1092AD
1096AD
1100AD
1104AD
1108AD
1112AD
1116AD
1120AD
1124AD
1128AD
1132AD
1136AD
1140AD
1144AD
1148AD
1152AD
1156AD
1160AD
1164AD
1168AD
1172AD
1176AD
1180AD
1184AD
1188AD
1192AD
1196AD
1200AD
1204AD
1208AD
1212AD
1216AD
1220AD
1224AD
1228AD
1232AD
1236AD
1240AD
1244AD
1248AD
1252AD
1256AD
1260AD
1264AD
1268AD
1272AD
1276AD
1280AD
1284AD
1288AD
1292AD
1296AD
1300AD
1304AD
1308AD
1312AD
1316AD
1320AD
1324AD
1328AD
1332AD
1336AD
1340AD
1344AD
1348AD
1352AD
1356AD
1360AD
1364AD
1368AD
1372AD
1376AD
1380AD
1384AD
1388AD
1392AD
1396AD
1400AD
1404AD
1408AD
1412AD
1416AD
1420AD
1424AD
1428AD
1432AD
1436AD
1440AD
1444AD
1448AD
1452AD
1456AD
1460AD
1464AD
1468AD
1472AD
1476AD
1480AD
1484AD
1488AD
1492AD
1496AD
1500AD
1504AD
1508AD
1512AD
1516AD
1520AD
1524AD
1528AD
1532AD
1536AD
1540AD
1544AD
1548AD
1552AD
1556AD
1560AD
1564AD
1568AD
1572AD
1576AD
1580AD
1584AD
1588AD
1592AD
1596AD
1600AD
1604AD
1608AD
1612AD
1616AD
1620AD
1624AD
1628AD
1632AD
1636AD
1640AD
1644AD
1648AD
1652AD
1656AD
1660AD
1664AD
1668AD
1672AD
1676AD
1680AD
1684AD
1688AD
1692AD
1696AD
1700AD
1704AD
1708AD
1712AD
1716AD
1720AD
1724AD
1728AD
1732AD
1736AD
1740AD
1744AD
1748AD
1752AD
1756AD
1760AD
1764AD
1768AD
1772AD
1776AD
1780AD
1784AD
1788AD
1792AD
1796AD
1800AD
1804AD
1808AD
1812AD
1816AD
1820AD
1824AD
1828AD
1832AD
1836AD
1840AD
1844AD
1848AD
1852AD
1856AD
1860AD
1864AD
1868AD
1872AD
1876AD
1880AD
1884AD
1888AD
1892AD
1896AD
1900AD
1904AD
1908AD
1912AD
1916AD
1920AD
1924AD
1928AD
1932AD
1936AD
1940AD
1944AD
1948AD
1952AD
1956AD
1960AD
1964AD
1968AD
1972AD
1976AD
1980AD
1984AD
1988AD
1992AD
1996AD
2000AD
2004AD
2008AD
Total number of leap years 253``
