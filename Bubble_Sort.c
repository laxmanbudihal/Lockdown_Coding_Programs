/*Question.
In Bubble sort, each pass consists of comparison each element in the file with its successor (i.e. x[i] with x[i+1]) and interchanging two elements if they are not in the proper order. The array may be sorted in any pass. If the array is sorted, then remaining passes should be skipped off. Write a C Program to sort an array of integers in ascending order and display the sorted array and Number of passes performed for sorting.

ANS:
*/



#include <stdio.h> 

void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 


void bubbleSort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 


	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 


int main() 
{ 
	int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
