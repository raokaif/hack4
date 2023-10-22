#include<stdio.h>
int main(int argc, char const *argv[])
{
    float initialBalance, MonthlyContribution, RateOfReturn, RateOfInflation,inflationAdjusted, interest;
    int year, month;
    printf(" Enter An initial starting balance\n");
    scanf("%f",&initialBalance);
    printf(" Enter A monthly contribution amount\n");
    scanf("%f",&MonthlyContribution);
    printf(" Enter An (average) annual rate of return (on the scale [0,1])\n");
    scanf("%f",&RateOfReturn);
    printf(" Enter An (average) annual rate of inflation (on the scale [0,1])\n");
    scanf("%f",&RateOfInflation);
    printf(" Enter A number of years until retirement\n");
    scanf("%d",&year);
    inflationAdjusted = ((1 +(float)RateOfReturn) / (1 + RateOfInflation)) - 1;
    inflationAdjusted = (float)inflationAdjusted / 12;
    interest = inflationAdjusted;
    month = year * 12;
    for (int i = 1; i <= month; i++)
    {
        
        interest = interest * (float)initialBalance;
        initialBalance = initialBalance + MonthlyContribution + (float)interest;
        printf("%d\n",i);
        printf("%.2f\n",initialBalance);
        printf("%.2f\n",interest);
        

        
    }
    
    return 0;
}
