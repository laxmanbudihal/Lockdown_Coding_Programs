/*Question.
C program to find digital root of a number
Description:
A digital root is the recursive sum of all the digits in a number. Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. This is only applicable to the natural numbers.
digit_root(0)= 0

digital_root(16)
=> 1 + 6
=> 7

digital_root(132189)
=> 1 + 3 + 2 + 1 + 8 + 9
=> 24 ...
=> 2 + 4
=> 6



ANS:
*/
#include <stdio.h>

int main()
{
    int num, sum, rem;

    printf("Please Enter any number = ");
    scanf("%d", &num);

    while(num >= 10)
    {
        for (sum=0; num > 0; num= num/10)
        {
            rem = num % 10;
            sum=sum + rem;
        }
        if(sum >= 10)
        {
            num = sum;
        }
        else
        {
            printf("Generic Root of Given num = %d", sum);
            break;
        }
    }

    return 0;
}