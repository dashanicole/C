#include <stdio.h>

int main(){
int number, ones, tenths, hundredths, thousandths, tenthousandths;

printf("Enter a five digits number: ");
scanf("%d", &number);

if(number<=99999){

tenthousandths = number/10000%100;
thousandths = number/1000%10;
hundredths = number/100%10;
tenths = number/10%10;
ones = number%10;

printf("%d%d%d%d%d", ones, tenths, hundredths, thousandths, tenthousandths);
}

else{
printf("You have entered more than 5 digits number.");
}

return 0;
}

