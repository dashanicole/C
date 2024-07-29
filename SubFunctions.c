#include <stdio.h>

int getOne (void);
int sqr (int x);
void printOne (int x);

int main(){
int a, b;

a = getOne();
b = sqr(a);
printOne(b);
return 0;
}

int getOne (void){
int square;
printf("Enter a square: \n");
scanf("%d", &square);
return square;
}
int sqr (int x){
return (x*x);
}
void printOne (int x){
printf("The value is %d", x);
return;
}

