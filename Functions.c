/*#include <stdio.h>
void dspMess();

int main(){
dspMess();
}
void dspMess(){
printf("Hello World");
}
*/
/*non-void without parameter
int acceptNum(){
int n;
scanf("%d",&n);
return n;
}
void prmptUser(){
printf("Input First Number: ");
}
int main(){
int n1;
prmptUser();
n1=acceptNum();
printf("The first Number is: %d",n1);
}
*/

#include<stdio.h>
int acceptNum(){
 int n;
  scanf("%d",&n);
 return n;
}
 
int computeSum(int num1, int num2){
 return num1 + num2;
}
 
void prmptUser(int temp){
 switch(temp){
 case 0: printf("Input First Number: ");break;
 case 1: printf("Input Second Number: ");break;
 }
}

void dsplyResult(int n1, int n2,int s){
  printf("%d + %d = %d",n1,n2,s);
 }
 
int main(){
 int n1,n2,sum;
  prmptUser(0);
  n1 = acceptNum();
  prmptUser(1);
  n2 = acceptNum();
  sum = computeSum(n1,n2);
  dsplyResult(n1, n2, sum); 
}
 



