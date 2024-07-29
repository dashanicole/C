#include <stdio.h>
int main(){
int speedLimit, speedVehicle, speed;
printf("Enter the speed limit: ");
scanf("%d",&speedLimit);
printf("Enter the speed of the vehicle: ");
scanf("%d",&speedVehicle);

if(speedVehicle>speedLimit){
   speed=speedVehicle-speedLimit;
   if(1<=speed<=10) 
   printf("\nThe overspeed is %d kph \nThe fine is PHP50.00",speed);
else if(11<=speed<=20)
   printf("\nThe overspeed is %d kph \nThe fine is PHP75.00",speed);
else if(21<=speed<=30)
   printf("\nThe overspeed is %d kph \nThe fine is PHP100.00",speed);
else if(speed>30)
   printf("\nThe overspeed is %d kph \nThe fine is PHP200.00",speed);
}else{
   printf("\nThe overspeed is 0 kph \nNo fine");
}
return 0;
}

