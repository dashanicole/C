#include <stdio.h> 

int main(){
	float rad, area, circumference;

	printf("\nInput radius: \n");
	scanf("%f", &rad);

	area = 3.1416*rad*rad;
	circumference = 2*3.1416*rad;

	printf("\nThe area of the circle: %f", area);
	printf("\nThe circumference of the circle: %f", circumference);

	return 0;
}

