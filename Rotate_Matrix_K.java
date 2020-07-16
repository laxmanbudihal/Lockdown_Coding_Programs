 /*Question
Write a java  Program to rotate the matrix by K times 


ANS:
*/


public class Main
{ 
    
    static final int M=3; 
    static final int N=3; 

    static void rotateMatrix(int matrix[][], int k) 
    { 
        
        int temp[]=new int[M]; 

        k = k % M; 
        for (int i = 0; i < N; i++) 
        { 
          
            for (int t = 0; t < M - k; t++) 
                temp[t] = matrix[i][t]; 

            for (int j = M - k; j < M; j++) 
                matrix[i][j - M + k] = matrix[i][j]; 

            for (int j = k; j < M; j++) 
                matrix[i][j] = temp[j - k]; 
        } 
    } 

    
    static void printMatrix(int matrix[][]) 
    { 
        for (int i = 0; i < N; i++) 
        { 
            for (int j = 0; j < M; j++) 
                System.out.print(matrix[i][j] + " "); 
            System.out.println(); 
        } 
    } 


    public static void main (String[] args) 
    { 
        int matrix[][] = {{1,2,3} ,{4,5,6} ,{7,8,9}}; 
        System.out.println("The inputted matrix : ");
        printMatrix(matrix);
        int k = 2; 

        rotateMatrix(matrix, k); 

        System.out.println("\nThe Rotated Matrix : \n");
        printMatrix(matrix); 
    } 
}