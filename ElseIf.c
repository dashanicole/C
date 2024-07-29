#include <stdio.h>

int main(){
int number;

printf("Enter a number: \n");
scanf("%d", &number);

if(number>100)
{
printf("\nCondition Exceeded\n");
printf("\nEnter a number again: \n");
scanf("%d", &number);
return;
}
else if(number>50)
{
printf("\nResult 2");
}
else{
printf("\nResult 1");
}
return 0;
}

