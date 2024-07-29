#include <stdio.h>
main ()
{

int Kilowatts, Consumption,Regular_Consumption, Excess_Consumption;
float Final_Bill;


printf("Enter the your kilowatts-hour of Consumption: ");
scanf("%d", &Kilowatts);

if(Kilowatts <= 25)
{
Consumption = Kilowatts * 50.00;
Final_Bill = Consumption + 8.5;
Regular_Consumption = Kilowatts * 50.00;
Excess_Consumption = Consumption - Regular_Consumption;
printf("\n\nTotal consumptions is %d\n\nExcess consumption is %d\n\nFinal bill is %.1f\n",Consumption, Excess_Consumption, Final_Bill);
}

else
{
Consumption = Kilowatts * 95.00;
Final_Bill = Consumption + 8.5;
Regular_Consumption = Kilowatts * 50.00;
Excess_Consumption = Consumption - Regular_Consumption;
printf("\n\nTotal consumptions is %d\n\nExcess consumption is %d\n\nFinal bill is %.1f\n",Consumption, Excess_Consumption, Final_Bill);
}




return 0;

}

