#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 6)
    {
        printf("Please provide 6 command line arguments.\n");
        return 1;
    }
    float initialBalance, MonthlyContribution, RateOfReturn, RateOfInflation,inflationAdjusted, interest,TotalInterest=0;
    int year, month;

    initialBalance = atof(argv[1]);
    MonthlyContribution = atof(argv[2]);
    RateOfReturn = atof(argv[3]);
    RateOfInflation = atof(argv[4]);
    year = atoi(argv[5]);

    inflationAdjusted = ((1 +(float)RateOfReturn) / (1 + RateOfInflation)) - 1;
    inflationAdjusted = (float)inflationAdjusted / 12;
    interest = inflationAdjusted;
    month = year * 12;

    printf("Month\tInterest\tBalance\n");

    for (int i = 1; i <= month; i++)
    {
        interest = inflationAdjusted * (float)initialBalance;
        TotalInterest = TotalInterest + (float)interest;
        initialBalance = initialBalance + MonthlyContribution + (float)interest;
        printf("%d\t%.2f\t%.2f\n",i,interest,initialBalance);  
    }
    printf("Total Interest Earned: %.2f\n",TotalInterest);
    printf("Total Nest Egg: %.2f",initialBalance);
    
    return 0;
}
