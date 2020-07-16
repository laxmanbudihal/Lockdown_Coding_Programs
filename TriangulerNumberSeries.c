/*
Triangular number series a triangular number or triangule number count the objects that can form an equilateral triange. The nth triangle number is the no.of dots or balls in a triangle with n dots on a side: it is the sum of the n natural numbers

*/


#include <stdio.h> 
  
// Function to find triangular number 
void triangular_series(int n) 
{ 
    for (int i = 0; i <= n; i++)  
        printf(" %d ", i*(i+1)/2); 
} 
  
// Driven Function 
int main() 
{ 
    int n;
    printf("enter the n");
    scanf("%d",&n);
    triangular_series(n); 
    return 0; 
}TT