#include <stdio.h>

int main(){
const double DEGREE_FACTOR = 57.295779;
double radians;
double degrees;

printf("Enter the angle in radians: ");
scanf("%lf", &radians);

degrees = radians*DEGREE_FACTOR;

printf("\n%6.3f is radians and %6.3f is degrees.", radians, degrees);
return 0;
}

