#include <stdio.h>

int main(){
float yards;
float feet;
float inches;
float centimeters;
float meters;

printf("Input a length of a cloth in yards: \n");
scanf("%f", &yards);

feet = yards * 3;
inches = feet * 12;
centimeters = inches * 2.54;
meters = centimeters / 100;

printf("\nThe yards is %6.2f ft.\n", feet);
printf("The yards is %6.2f inches. \n", inches);
printf("The yards is %6.2f meters. \n", meters);
return 0;
}

