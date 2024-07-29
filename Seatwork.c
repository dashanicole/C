#include <stdio.h> 
int main(){ 
int pos=0,neg=0,zer=0,inp=0; 
	printf("Enter an integer (9999 to terminate): "); 
	scanf("%d",&inp); 
	while(inp!=9999) { 
		if(inp>0)pos++; 
		else if(inp<0)neg++; 
		else zer++; 
		printf("Enter next integer (9999 to terminate): "); 
		scanf("%d",&inp); 
	} 
	printf("\n*NUMBERS YOU ENTERED*\n\n"); 
	printf("Positive numbers: %d\n",pos); 
	printf("Negative numbers: %d\n",neg); 
	printf("Zeroes: %d\n",zer); 
    return 0;
} 

