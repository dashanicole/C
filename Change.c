#include <stdio.h>
	int main(){
	int number, ones, tenths, hundredths, thousandths, tenthousandths;
	
	printf("Enter a 5 digits number: ");
	scanf("%d", &number);

	if(number<=99999){
		ones = number/10000%100;
		tenths = number/1000%10;
		hundredths = number/100%10;
		thousandths = number/10%10;
		tenthousandths = number%10;

		printf("%d%d%d%d%d", ones, tenths, hundredths, thousandths, tenthousandths);
	}

	else{
		printf("You've input 6 digits");
	}

	return 0;
}

