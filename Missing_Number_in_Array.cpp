/*Question.
Write a C++ program to find the missing number in array


Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ C[i] ≤ 107

Example:
Input:
1
5
1 2 3 5

Output:
4
Ans:
*/



#include <bits/stdc++.h> 
using namespace std; 
  
void printTwoElements(int arr[], int size) 
{ 
    int i; 
    cout << " The repeating element is "; 
  
    for (i = 0; i < size; i++) { 
        if (arr[abs(arr[i]) - 1] > 0) 
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
        else
            cout << abs(arr[i]) << "\n"; 
    } 
  
    cout << "and the missing element is "; 
    for (i = 0; i < size; i++) { 
        if (arr[i] > 0) 
            cout << (i + 1); 
    } 
} 
  

int main() 
{ 
    int arr[] = { 1,5,1,2,3}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printTwoElements(arr, n); 
}