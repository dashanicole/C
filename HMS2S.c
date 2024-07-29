#include <stdio.h>

int main(){
int hours, minutes, seconds, timeinsecs;

printf("Enter the hours: ");
scanf("%d", &hours);
printf("Enter the minutes: ");
scanf("%d", &minutes);
printf("Enter the seconds: ");
scanf("%d", &seconds);

timeinsecs = seconds+(minutes*60)+(hours*60*60);
printf("\n%d hours, %d minutes, and %d seconds is equals to %d seconds.", hours, minutes, seconds, timeinsecs);

return 0;
}

