/*Input 3 numbers. Display the largest number in the main function. 
Create function name dtrmnLrgr with only two(2) parameters. 
All conditions must be in the dtrmnLrgr function.
Filename: FEXER11*/

#include<stdio.h>
int dtrmnLrgr(int n1,int n2,int n3){
   if(n1>=n2&&n1>=n3) 
   return n1;
   else if(n2>=n1&&n2>=n3) 
   return n2;
   else 
   return n3;
}

int main(){
   int n1,n2,n3,lrgst;
   printf("Input first number: ");
   scanf("%d", &n1);
   printf("Input second number: ");
   scanf("%d",&n2);
   printf("Input third number: ");
   scanf("%d",&n3);
   lrgst=dtrmnLrgr(n1,n2,n3);
   printf("\nLargest number inputted: %d",lrgst);
   return 0;
}

