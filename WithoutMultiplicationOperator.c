#include <stdio.h>

int main(){  
int x=0,y=0,y1=0; 
int product = 0; 

printf("Input first number: ");
scanf("%d",&x);
printf("Input second number: ");
scanf("%d",&y);
y1=y;

   while(y!=0){
   product+=x;
   y--;
   }
   
   
printf("\n%d * %d = %d\n",x,y1,product);
return 0;
}

