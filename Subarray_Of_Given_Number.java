/*Question.
 In an array X of size M where the array elements contain values from 1 to M with duplicates, the task is to find total number of sub arrays which start and end with the same element.

Example:
Input: X[] = {1, 2, 1, 5, 2}
Output: 7
Explanation:
Total 7 sub-array of the given array are {1}, {2}, {1}, {5}, {2}, {1, 2, 1} and {2, 1, 5, 2} are start and end with same element.

ANS:—
*/
public class count {

	 
			
		    public static void cntArray(int A[], int N) 
		    { 
		        
		        int result = 0; 
		  
		        for (int i = 0; i < N; i++) { 
		  
		            
		            result++; 
		  
		            
		            int current_value = A[i]; 
		  
		            for (int j = i + 1; j < N; j++) { 
		  
		                
		                if (A[j] == current_value) { 
		                    result++; 
		                } 
		            } 
		        } 
		  
		        
		        System.out.println(result); 
		    } 
		  
		     
		    public static void main(String[] args) 
		    { 
		        int[] A = { 1,2,1,5,2 }; 
		        int N = A.length; 
		        cntArray(A, N); 
		    } 
		 

	}