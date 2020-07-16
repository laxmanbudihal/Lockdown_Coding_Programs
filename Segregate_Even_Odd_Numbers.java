/*Question.
Write a Java Program to Segregate Even and Odd numbers .


Ans:
*/
import java.io.*; 
  
public class GFG  
{ 
    
    static void rearrangeEvenAndOdd(int arr[], int n) 
    { 
       
        int j = -1,temp; 
      
        
        for (int i = 0; i < n; i++) { 
      
           
            if (arr[i] % 2 == 0) { 
      
                
                j++; 
      
               temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
      
     
    public static void main(String args[]) 
    { 
        int arr[] =  {12, 34, 45, 9, 8, 90, 3};
        int n = arr.length; 
      
        rearrangeEvenAndOdd(arr, n); 
      
        for (int i = 0; i < n; i++) 
            System.out.print( arr[i] + " "); 
    } 
} 
  