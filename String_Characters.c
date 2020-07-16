/*
 Write a C Program to count Uppercase, Lowercase, special character and numeric values for a given String
Input : Read a String (combination of character, numeric, special character) from keyboard.
Ex: #HaaGs01fOr@haaks07
Output :
Lower case letters = 10                                                                                                                                                    
Uppercase letters = 3                                                                                                                                                      
Numbers = 4                                                                                                                                                                 
Special characters = 2 

*/


#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100 


int main()
{
    char str[MAX_SIZE];
    int lower,upper,number,special, i;

    lower=upper=number=special = i = 0;



    printf("Enter any string : ");
    gets(str);


    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lower++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            upper++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
        else
        {
            special++;
        }

        i++;
    }

    printf("Lower case letters = %d\n", lower);
    printf("Uppercase letters = %d\n", upper);
    printf("Numbers = %d\n", number);
    printf("Special characters = %d", special);

    return 0;
}