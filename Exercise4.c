#include <stdio.h>
int main(){
int Consumption,ExcessConsumption;
float Charges,FinalElectricBill; 
printf("Enter the number of kilowatt-hour consumption: \n");
scanf("%d",&Consumption);
 
if(Consumption<=25){
Charges=Consumption*50.00;
ExcessConsumption=0;
}else{
Charges=25*50.00;
Charges=(Consumption-25)*95.00+Charges;
ExcessConsumption=Consumption-25;
}
FinalElectricBill=Charges*0.085+Charges;
printf("\nConsumption: %d kWh\n",Consumption);
printf("Excess consumption: %d kWh\n",ExcessConsumption);
printf("Final electric bill: PHP%0.2f\n",FinalElectricBill);
return 0;
}

