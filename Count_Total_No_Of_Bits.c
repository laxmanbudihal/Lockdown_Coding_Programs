/*Question.
Write a C Program to Count total set bits in all numbers from 1 to n

Given a positive integer n, count the total number of set bits in binary representation of all numbers from 1 to n.

Examples:
Input: n = 3
Output: 4
Input: n = 6
Output: 9

Hint: Read a positive integer (example: 3 indicates range), so u have to consider 1, 2, 3 as the input convert these numbers into binary and count the number of 1 in that (1- 0001, 2- 0010, 3- 0011) number of 1s from all 3 digit is 4 so the answer is 4

Ans:
*/#include <stdio.h>
unsigned int countSetBitsUtil(unsigned int x); 
unsigned int countSetBits(unsigned int n) 
{ 
	int bitCount = 0;

	for (int i = 1; i <= n; i++) 
		bitCount += countSetBitsUtil(i); 

	return bitCount; 
} 
unsigned int countSetBitsUtil(unsigned int x) 
{ 
	if (x <= 0) 
		return 0; 
	return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2); 
} 
int main() 
{ 
	int n;
	printf("Enter a number : ");
	scanf("%d",&n); 
	printf("Total set bit count is %d", countSetBits(n)); 
	return 0; 
}