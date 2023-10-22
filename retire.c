#include<stdio.h>
int main(int argc, char const *argv[])
{
    float initialBalance, MonthlyContribution, RateOfReturn, RateOfInflation;
    int year;
    printf(" Enter An initial starting balance\n");
    scanf("%d",&initialBalance);
    printf(" Enter A monthly contribution amount\n");
    scanf("%d",&MonthlyContribution);
    printf(" Enter An (average) annual rate of return (on the scale [0,1])\n");
    scanf("%d",&RateOfReturn);
    printf(" Enter An (average) annual rate of inflation (on the scale [0,1])\n");
    scanf("%d",&RateOfInflation);
    printf(" Enter A number of years until retirement\n");
    scanf("%d",&year);
    return 0;
}
