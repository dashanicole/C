#include<stdio.h>
int OddorEven(int posN){
 if(posN%2==0)
 printf("\nThe %d is even.",posN);
 else
 printf("\nThe %d is odd.",posN);
}

int Factorial(int posN,int f,int i){
 for(i=1;i<=posN;i++)
 f=f*i;
 return f;
}

int Pow(int base,int posN,int result,int n){
 for(n=0;n<posN;++n)
 result*=base;
 return result;
}

int main(){
int posN,oddEven,fctrl,f=1,i,pwr,base=2,result=1,n;
printf("Input a positive number: ");
scanf("%d",&posN);
oddEven=OddorEven(posN);
fctrl=Factorial(posN,f,i);
printf("\nThe factorial of %d is %d.",posN,fctrl);
pwr=Pow(base,posN,result,n);
printf("\nThe answer of %d^%d is %d.",base,posN,pwr);
}

