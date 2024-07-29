#include <stdio.h>
void diether(float data);

int main(){
	float type;
		
	printf("Enter a float: \n");
	scanf("%f", &type);
	diether(type);
		
	return 0;
}
	
void diether(float data){
	printf("%0.2f \n", data);
	return;
}


