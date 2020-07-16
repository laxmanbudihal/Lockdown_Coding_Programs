import java.io.*;
import java.util.Scanner;
public class reversalalgorithm
{ 
    static void leftRotate(int arr[], int d) 
    { 
  
        if (d == 0) 
            return; 
        int n = arr.length; 
        reverseArray(arr, 0, d - 1); 
        reverseArray(arr, d, n - 1); 
        reverseArray(arr, 0, n - 1); 
    } 
    static void reverseArray(int arr[], int start, int end) 
    { 
        int temp; 
        while (start < end) 
        { 
            temp = arr[start]; 
            arr[start] = arr[end]; 
            arr[end] = temp; 
            start++; 
            end--; 
        } 
    } 
 
    static void printArray(int arr[]) 
    { 
        for (int i = 0; i < arr.length; i++) 
            System.out.print(arr[i] + " "); 
    } 
 
    public static void main(String[] args) 
    { 
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter all the elements:");
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter  d:");
        int d =sc.nextInt(); 
        d = d % n; 
        leftRotate(arr, d);
        System.out.println("Output:"); 
        printArray(arr); 
    } 
}