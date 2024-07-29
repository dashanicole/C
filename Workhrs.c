#include <stdio.h>

int main(){
int workhrs;
float regularpay, overtimehrs, overtimepay, weeklygrosspay;
printf("Enter the numbers of weekly work hours: "); 
scanf("%d",&workhrs);

if(workhrs<=40){
overtimepay=0;
regularpay=workhrs*75/7;
weeklygrosspay=workhrs*75;
overtimehrs=0;
}else{
overtimepay=(workhrs-40)*75*0.015;
regularpay=(40*75)+overtimepay/7;
weeklygrosspay=(40*75)+overtimepay;
overtimehrs=workhrs-40;
}
printf("\nRegular pay: PHP%0.2f.\n",regularpay);
printf("Overtime hours: %d hrs.\n",overtimehrs);
printf("Overtime pay: PHP%0.2f.\n",overtimepay);
printf("Weekly gross pay: PHP%0.2f.\n",weeklygrosspay);
return 0;
}

