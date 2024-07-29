#include <stdio.h>

int main (){
	int a, b, c;
	float Ave;

	printf("\nAverage of 3 integers");
	printf("\nInput 3 integers: \n");
	scanf("%d %d %d", &a, &b, &c);

	Ave = (a+b+c)/3.0;

	printf("\nThe average is %f", Ave);
	
	return 0;
}

