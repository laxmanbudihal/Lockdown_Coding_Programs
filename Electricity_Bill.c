/*
  C program to calculate total electricity bill
 */

#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <=100)
    {
        amt = unit * 10;
    }
    else if(unit <=200)
    {
        amt = 25 + ((unit-50) * 15);
    }
    else if(unit <=300)
    {
        amt = 100 + ((unit-150) * 20);
    }
    else
    {
        amt = 220 + ((unit-250) * 25);
    }
    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}