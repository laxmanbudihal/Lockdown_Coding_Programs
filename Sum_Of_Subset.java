/*Question.
Write a Java program to find Perfect Sum Problem
Given an array arr[] of integers and an integer K, the task is to print all subsets of the given array with the sum equal to the given target K.

Examples:

Input: arr[] = {5, 10, 12, 13, 15, 18}, K = 30
Output: {12, 18}, {5, 12, 13}, {5, 10, 15}
Explanation:
Subsets with sum 30 are:
12 + 18 = 30
5 + 12 + 13 = 30
5 + 10 + 15 = 30

Input: arr[] = {1, 2, 3, 4}, K = 5
Output: {2, 3}, {1, 4}

ANS:
*/


package sumsubsets;
import java.util.*; 
class GFG { 
public static void sumSubsets( 
     int set[], int n, int target) 
 { 
    int x[] = new int[set.length]; 
     int j = set.length - 1; 
     while (n > 0) { 
         x[j] = n % 2; 
         n = n / 2; 
         j--; 
     } 
     int sum = 0; 
     for (int i = 0; i < set.length; i++) 
         if (x[i] == 1) 
             sum = sum + set[i]; 
     if (sum == target) { 
         System.out.print("{"); 
         for (int i = 0; i < set.length; i++) 
             if (x[i] == 1) 
                 System.out.print(set[i] + ", "); 
         System.out.print("}, "); 
     } 
 } 
public static void findSubsets(int[] arr, int K) 
 { 
     int x = (int)Math.pow(2, arr.length); 
     for (int i = 1; i < x; i++) 
         sumSubsets(arr, i, K); 
 } 
public static void main(String args[]) 
 { 
     int arr[] = { 5, 10, 12, 13, 15, 18 }; 
     int K = 30; 

     findSubsets(arr, K); 
 } 
}