#include <stdio.h>
int main(){
float p,r=0.10,t,n=12.00,ci,a;

printf("Enter a positive amount: ");
scanf("%f",&p);
printf("Enter a positive number of years: ");
scanf("%f",&t);

while(p<0||t<0){
     if(p>0&&t>0){
	 break;
     }
	 else{
     printf("\nEnter a positive amount: ");
     scanf("%f",&p);
	 printf("Enter a positive number of years: ");
     scanf("%f",&t);
	 }
     }
     ci= p*(pow((1+r/100),t));
	 a=ci+p;
	 printf("\nCompound Interest after %0.0f years: PHP%0.2f",t,ci);
	 printf("\nOriginal Amount after %0.0f years: PHP%0.2f\n",t,a);
return 0;
}

