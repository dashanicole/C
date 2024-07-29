#include <stdio.h>
int main(){
int ElectricityConsumed,ExcessElectricityConsumed;
float Charges,FinalElectricBill; 
printf("Enter the number of kilowatt-hours of electricity that the customer had consumed: \n");
scanf("%d",&ElectricityConsumed);
ExcessElectricityConsumed=ElectricityConsumed-25;

if(ElectricityConsumed<=25)
Charges=ElectricityConsumed*50;

if(ElectricityConsumed>25)
Charges=(ElectricityConsumed-25)*95+25*50;

FinalElectricBill=Charges*0.085;

printf("\nElectricity consumption: %d kWh\n",ElectricityConsumed);
printf("Excess electricity consumption: %d kWh\n",ExcessElectricityConsumed);
printf("Final electric bill of the customer: PHP%0.2f\n",FinalElectricBill);
return 0;
}

