//Write a program in C to print all permutations of a given string using pointers.



#include <stdio.h> 
#include <string.h> 

/* Function to swap values at two pointers */
void swap(char *x, char *y) 
{ 
 char temp; 
 temp = *x; 
 *x = *y; 
 *y = temp; 
} 


void permute(char *a, int l, int r) 
{ 
int i; 
if (l == r) 
 printf("%s\n", a); 
else
{ 
 for (i = l; i <= r; i++) 
 { 
  swap((a+l), (a+i)); 
  permute(a, l+1, r); 
  swap((a+l), (a+i)); 
 } 
} 
} 

int main() 
{ 
 char str[] = "ABC"; 
 int n = strlen(str); 
 permute(str, 0, n-1); 
 return 0; 
}