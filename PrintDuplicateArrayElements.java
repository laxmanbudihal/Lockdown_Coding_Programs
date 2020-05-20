/*Question. 
Given an array a[] of size n which contains elements from 0 to n-1, write a program printDuplicates which prints the duplicate elements of the given array. If no duplicate element is found print -1.
Input:
The first line of input must contains an integer n which denotes number of elements of Array. Second line contains n space separated integers denoting elements of array a[].

Output:
Print the duplicate elements from the given array.

Ans:
*/
import java.util.*;
import java.util.Scanner;
 public class Duplicates
 {
     public static void main (String[] args)
     {
         int flag=0;
         Scanner sc=new Scanner(System.in);
         System.out.println("Enter the length of array");
         int n=sc.nextInt();
         int [] arr=new int[n];
         System.out.println("Enter Array Elements:");
         for(int i=0;i<n;i++)
         arr[i]=sc.nextInt();
         System.out.println("the Array Elements are:");
         for(int i =0;i<n;i++)
               System.out.println(arr[i]);
               
         for (int j=0; j<arr.length; j++)
             for(int k=j+1; k<arr.length; k++)
             if (arr[j]==arr[k])
            {
              System.out.println("Duplicate elements are:"+""+arr[j]);
             flag=1;
            }
              
    if(flag==0) {
      System.out.println("no duplicate elements.");
      System.out.println("-1");
    }
    }
 }
