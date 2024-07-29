#include <stdio.h>
int main(){
int meters, modulo;
float charges;
printf("Enter the distance in meters: \n");
scanf("%d",&meters);

if(meters<=300){
charges=20.00;
}
meters=meters-300;
if(meters%200==0){
charges=(meters/200)*2.00+20.00;
}
modulo=meters%200;
if(modulo>0){
charges=(meters/200)*2.00+20.00+2.00;
}
printf("\nFee: PHP%0.2f",charges);
return 0;
}

