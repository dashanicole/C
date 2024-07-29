#include <stdio.h>

int main(){
    char type; 
    int hourIn, minuteIn, hourOut, minuteOut, entry, exit, totalParkingTime; 
    float totalRounded, totalChargeFee, GST;

    printf("Welcome to Help Parking Lot!\n"); 

    printf("Enter type of vehicle: \n"); 
    scanf("%c", &type);

    switch(type)
    {
        case 'C':
            if(totalParkingTime <= 3)
                totalChargeFee = 0.8 * totalParkingTime;
            else
                totalChargeFee = 0.8 * 3 + 1.5 * (totalParkingTime - 3);
            break;

        case 'T':
            if(totalParkingTime <= 2)
                totalChargeFee = 1.5 * totalParkingTime;
            else
                totalChargeFee = 1.5 * 2 + 2.3 * (totalParkingTime - 2);
            break;

        case 'B':
            if(totalParkingTime <= 1)
                totalChargeFee = 2 * totalParkingTime;
            else
                totalChargeFee = 2 * 1 + 3.4 * (totalParkingTime - 1);
            break;
    }
    scanf("%f", &totalChargeFee);

    printf("Enter an integer between 0 and 24 showing the hour the vehicle entered the lot: %d", hourIn); 
    scanf("%d", &hourIn);
    printf("Enter an integer between 0 and 60 showing the minute the vehicle entered the lot: %d", minuteIn); 
    scanf("%d", &minuteIn);
    printf("Enter an integer between 0 and 24 showing the hour the vehicle exited the lot: %d", hourOut); 
    scanf("%d", &hourOut);
    printf("Enter an integer between 0 and 60 showing the minute the vehicle exited the lot: %d", minuteOut); 

    entry = hourIn + minuteIn;
    scanf("%d", &entry);
    exit = hourOut + minuteOut;
    scanf("%d", &exit);
    totalParkingTime = exit - entry;

    printf("HELP PARKING LOT CHARGE\n Type of vehicle: %c\n TIME-IN\n \t\t\t %d:%d\n TIME-OUT\n \t\t\t %d:%d\n \t\t\t------\n PARKING TIME %d:%d\n ROUNDED TOTAL \t\t\t%f\n \t\t\t------\n TOTAL CHARGE \t\t RM%.2f\n GST \t\t\t RM%.2f\n TOTAL \t\t\t RM%.2f");

    return 0;
}

