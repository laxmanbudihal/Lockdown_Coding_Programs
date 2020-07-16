
/*
 Write a C program to print kth digit
 Given two numbers a and b, find kth digit from right of a^b.

Input:

The first line of the input contains T denoting the number of test cases.Each of the next T lines contains three space separated positive integers denoting the value of a , b and k respectively.

Output:

For each test case, output the kth digit from right of a^b in new line.

Constraints:

1<=T<=100
1<=a , b <=15
1<=k<=|totaldigits in a^b|

Example:

Input:
2
3 3 1
5 2 2

Output:
7
2

Hint
Output: 1
Explanation 3^3 = 27 for k = 1. First digit is 7 in 27
Output : 2
Explanation 5^2 = 25 for k = 2. First digit is 2 in 25




*/


#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	  long int a,b,p,c=0,r,i,k;
	   scanf("%ld %ld %ld",&a,&b,&k);
	   p=pow(a,b);
	   while(p>0)
	       {
	       r=p%10;
	       c++;
	       if(c==k)
	       {
	           printf("%d\n",r);
	           break;
	       }
	       p=p/10;
	       }
	   
	   
	}
	return 0;
}