/*  Q.Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.
Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".
Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106
Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1
Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5

Ans: */

#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
	// Compare function used by qsort
	return ( (int)a - (int)b );
}

void main()
{
	int t;
	scanf("%d",&t);
	while(t-->0)
	{
		int n;
		scanf("%d",&n);
		int arr[n];

		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}

		qsort(arr,n,sizeof(int),cmpfunc);

		int ptr1;
		int ptr2;
		int count=0;

		for(int i=n-1;i>=0;i--)
		{
			ptr1=0;
			ptr2=i-1;

			while(ptr1<ptr2)
			{
			
				if(arr[ptr1]+arr[ptr2]>arr[i])
				{
					ptr2--;
				}
				else if(arr[ptr1]+arr[ptr2]<arr[i])
				{
					ptr1++;
				}
				else
				{
					count++;
					ptr1++;
					ptr2--;
				}
			}
		}

		if(count)
		{
			printf("%d\n",count);
		}
		else
		{
			printf("%d\n",-1);
		}
	}
}