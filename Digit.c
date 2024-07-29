#include <stdio.h>

int main(void){
int numbers;
int hundredths;
int tenths;
int ones;

printf("Enter numbers: \n"); 
scanf("%d", &numbers);

hundredths = numbers/100;
tenths = numbers/10%10;
ones = numbers%10;

printf("The hundreths place is %d.\n", hundredths);
printf("The tenths place is %d.\n", tenths);
printf("The ones place is %d.\n", ones);

return 0;
}

