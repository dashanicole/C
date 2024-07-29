#include <stdio.h>

int main (){
float YearlyIncome, YearlySavings, WeeklyIncome, AverageMonthlyExpenses;

printf("\nInput WeeklyIncome: \n");
scanf("%f", &WeeklyIncome);

printf("\nInput AverageMonthlyExpenses:\n");
scanf("%f", &AverageMonthlyExpenses);

YearlyIncome = WeeklyIncome*52;
YearlySavings = YearlyIncome-(AverageMonthlyExpenses*12);

printf("\nThe YearlyIncome is: %f", YearlyIncome);
printf("\nThe YearlySavings: %f", YearlySavings);

return 0;
}

