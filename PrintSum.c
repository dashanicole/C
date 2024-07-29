#include <stdio.h>

int main (void){
int a;
int b;
int c;
int sum;

printf("\nWelcome. This program adds\n");
printf("three numbers. Enter three numbers\n"); 
printf("in the form: nnn nnn nnn <return>\n");
scanf("%d %d %d", &a, &b, &c);

sum = a + b + c;

printf("\nThe total is: %d\n\n", sum);

printf("Thank you. Have a great day.\n");

return 0;
}

