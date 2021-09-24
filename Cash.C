#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
    int coin, cents, i, j, k, l, m;
    float owe;
    label: printf("Enter the amount that the customer OWES:$");
    scanf("%f",&owe);
    if(owe<0)
    {
        goto label;
    }
    printf("Customer OWES $%f",owe);
    cents = owe * 100;
    printf("\nCustomer OWES %dcents",cents);
    j=0, k=0, l=0, m=0;
    for(i=cents; i>=0; i--)
    {
        if(cents>=25)
        {
            cents=cents-25;
            j++;
        }
        else if(cents>=10)
        {
            cents=cents-10;
            k++;
        }
        else if(cents>=5)
        {
            cents=cents-5;
            l++;
        }
        else if(cents>=1)
        {
            cents=cents-1;
            m++;
        }
    }
    printf("\nCoins Used:\n");
    printf("QUARTER:%d\t DIME:%d\t NICKEL:%d\t PENNY:%d\t",j,k,l,m);
    printf("\nTOTAL:%d\n",j+k+l+m);
}
