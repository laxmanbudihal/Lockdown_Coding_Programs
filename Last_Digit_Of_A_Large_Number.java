/*Question.
Write a Java program to find Last Digit of a^b (a to the power b) for Large Numbers

You are given two integer numbers, the base a (number of digits d, such that 1 <= d <= 1000) and the index b (0 <= b <= 922*10^15). You have to find the last digit of a^b.

Examples:

Input : 3 10
Output : 9

Input : 6 2
Output : 6

Algorithm
Algorithm :

1.Since number are very large we store them as a string.
2.Take last digit in base a.
3.Now calculate b%4. Here b is very large.
	-> If b%4==0 that means b is completely divisible by 4, so our exponent now will be exp 	= 4
	because by multiplying number 4 times, we get the last digit according to cycle table in
	above diagram.
	->If b%4!=0 that means b is not completely divisible by 4, so our exponent now will be
	exp=b%4 because by multiplying number exponent times, we get the last digit according to
	cycle table in above diagram.
	-> Now calculate digit = pow( last_digit_in_base, exp ).
	->Last digit of a^b will be ldigit%10

Ans:
*/

import java.io.*; 
import java.math.*; 
import java.util.Scanner;

public class GFG  
{ 
    static int power(long x, long y, long p) 
    { 
        long res = 1; 
       
        x = x % p; 
       
        while (y > 0) { 
            if ((y & 1) != 0) 
                res = (res * x) % p; 
            y = y >> 1; 
            x = (x * x) % p; 
        } 
        return (int) res; 
    } 

    static void printLastKDigits(int a, int b, int k) 
    { 
        System.out.print("Last " + k + " digits of " + a + 
                            "^"  +  b + " = "); 

        int temp = 1; 
        for (int i = 1; i <= k; i++) 
            temp *= 10; 

        temp = power(a, b, temp); 

        for (int i = 0; i < k - Integer.toString(temp).length() ; i++) 
            System.out.print(0); 

        if (temp != 0) 
            System.out.print(temp); 
    } 
      
 
    public static void main(String[] args) 
    { 
        int a,b,k;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter a inputs");
        a=input.nextInt();
        b=input.nextInt();
        System.out.println("Enter a no of last digit to be displayed");
       k=input.nextInt(); 
        printLastKDigits(a, b, k); 
    }
}