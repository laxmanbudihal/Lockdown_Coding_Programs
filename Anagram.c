/*  Hint: An Anagram of a string is another string that contains same characters, only the order of characters can be different.
For example, "act" and "cat" are anagram of each other.

Ans: */ 


#include<stdio.h>
#include<string.h>
char s1[15], s2[15];

int s_1 = 0, s_2 = 0, i, temp, j, test;

void
compare () 
{
  
temp = strlen (s1);
  
for (i = 0; i < temp; i++)
    
    {
      if (s1[i] != ' ')
	
	    {
	       s_1++;
	}
}				//for length
  printf ("\n s_1 %d", s_1);

temp = strlen (s2);
  
for (i = 0; i < temp; i++)
    
    {
      if (s2[i] != ' ')
	
	{
	  s_2++;
	
}
    
}				//for length
  printf ("\n s_2 %d", s_2);
  
 
if (s_1 != s_2)
    
    {
      printf ("\n they are not annagrams. \n");
      
      
	exit(0);
    }				//initial cond failure
  
 
  else
    
    {
      temp = s_1;
      test = s_1;
      
for (i = 0; i < s_2; i++)
	
 
	{
	  printf ("\n i %d", i);
	  
for (j = 0; j < temp; j++)
	    
	    {
	      printf ("\n j %d", j);
	      
if (s1[i] == s2[j] && s1[i] != ' ' && s2[j] != ' ')
		
		{
		  test--;
		  
break;
		
}
	    
}
	
}
    
}				//else

 
}				//function

void
input () 
{
  printf ("\n input string 1 : ");
  
gets (s1);
  
printf ("\n input string 2 : ");
  
gets (s2);

 
} 

void

main () 
{
  input ();
  
compare ();
  
 
printf ("\n ending test %d", test);
  
if (test == 0)
    
printf ("\n yes ! ... they are annagrams. ");
  
  else
    
printf ("\n they are not annagrams. \n");

}