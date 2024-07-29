#include <stdio.h>
int main(){
char typeVehicle;
int hrEnter,minEnter,hrLeft,minLeft,hrDifference,minDifference,hrDifference1;
float FR,SR,totalCharges;

printf("Type of Vehicle: ");
scanf("%c",&typeVehicle);
printf("Hour vehicle entered lot (0 - 23)  : ");
scanf("%d",&hrEnter);
printf("Minute vehicle entered lot (0 - 59): ");
scanf("%d",&minEnter);
printf("Hour vehicle left lot (0 - 23)     : ");
scanf("%d",&hrLeft);
printf("Minute vehicle entered lot (0 - 59): ");
scanf("%d",&minLeft);

hrDifference=hrLeft-hrEnter;

printf("\n   UC PARKING LOT CHARGE   \n\n");

switch(toupper(typeVehicle)){
   
   case 'C': printf("Type of Vehicle: Car\n"); break;
   case 'T': printf("Type of Vehicle: Truck\n"); break;
   case 'B': printf("Type of Vehicle: Bus\n"); break;
   default: printf("Type of Vehicle: (Not specified)\n"); break;
   }
   
if(hrEnter<12){
  if(minEnter<=9){
  printf("TIME IN        %d:0%dAM\n",hrEnter,minEnter);
  }else{
  printf("TIME IN        %d:%dAM\n",hrEnter,minEnter);
  }
}else if(hrEnter==12){
  if(minEnter<=9){
  printf("TIME IN        %d:0%dPM\n",hrEnter,minEnter);
  }else{
  printf("TIME IN        %d:%dPM\n",hrEnter,minEnter);
  }
}else{
  hrEnter=hrEnter-12;
  if(minEnter<=9){
  printf("TIME IN        %d:0%dPM\n",hrEnter,minEnter);
  }else{
  printf("TIME IN        %d:%dPM\n",hrEnter,minEnter);
  }
}

if(hrLeft<12){
  if(minLeft<=9){
  printf("TIME OUT       %d:0%dAM\n\n",hrLeft,minLeft);
  }else{
  printf("TIME OUT       %d:%dAM\n\n",hrLeft,minLeft);
  }
}else if(hrLeft==12){
  if(minLeft<=9){
  printf("TIME OUT       %d:0%dPM\n",hrLeft,minLeft);
  }else{
  printf("TIME OUT       %d:%dPM\n",hrLeft,minLeft);
  }
}else{
  hrLeft=hrLeft-12;
  if(minLeft<=9){
  printf("TIME OUT       %d:0%dPM\n\n",hrLeft,minLeft);
  }else{
  printf("TIME OUT       %d:%dPM\n\n",hrLeft,minLeft);
  }
}

if(hrDifference<12){
  if(minLeft==minEnter){
	if(hrDifference==0){
	printf("PARKING TIME    0:00\n");
	printf("ROUNDED TOTAL   0:00\n");
	}else{
	printf("PARKING TIME   %d:00AM\n",hrDifference);
	printf("ROUNDED TOTAL  %d:00AM\n",hrDifference);
	}
	}
  else if(minLeft>minEnter){
    minDifference=minLeft-minEnter;
	if(minDifference<=9){
	printf("PARKING TIME   %d:0%dAM\n",hrDifference,minDifference);
	}else{
    printf("PARKING TIME   %d:%dAM\n",hrDifference,minDifference);
	}
	if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00AM\n",hrDifference);
    }else{
       hrDifference=hrDifference+1;
	   if(hrDifference==12){
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	   }else{
	   printf("ROUNDED TOTAL  %d:00AM\n",hrDifference);
	   }
	   }
	   }
  else{
    hrDifference=hrDifference-1;
	minDifference=minLeft+60-minEnter;
	if(hrDifference==0){
	printf("PARKING TIME   0:%dAM\n",minDifference);
	}else if(minDifference<=9){
	printf("PARKING TIME   %d:0%dAM\n",hrDifference,minDifference);
	}else{
	printf("PARKING TIME   %d:%dAM\n",hrDifference,minDifference);
	}
    if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00AM\n",hrDifference);
	}else{
       hrDifference=hrDifference+1;
       if(hrDifference==12){
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	   }else{
	   printf("ROUNDED TOTAL  %d:00AM\n",hrDifference);
	   } 
	   } 
	   } 
	   }
else if(hrDifference==12){
  if(minLeft==minEnter){
	printf("PARKING TIME   %d:00PM\n",hrDifference);
	printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	}
  else if(minLeft>minEnter){
    minDifference=minLeft-minEnter;
    if(minDifference<=9){
	printf("PARKING TIME   %d:0%dPM\n",hrDifference,minDifference);
	}else{
    printf("PARKING TIME   %d:%dPM\n",hrDifference,minDifference);
	}
	if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	}else{
       hrDifference=hrDifference+1;
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	   }
}else{
    hrDifference=hrDifference-1;
	minDifference=minLeft+60-minEnter;
	if(minDifference<=9){
	printf("PARKING TIME   %d:0%dPM\n",hrDifference,minDifference);
	}else{
    printf("PARKING TIME   %d:%dPM\n",hrDifference,minDifference);
	}
    if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);
	}else{
       hrDifference=hrDifference+1;
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference);  
	   } 
       }
}else{
    if(minLeft==minEnter){
	hrDifference1=hrDifference-12;
	printf("PARKING TIME   %d:00PM\n",hrDifference1);
	printf("ROUNDED TOTAL  %d:00PM\n",hrDifference1);
	}
    else if(minLeft>minEnter){
    minDifference=minLeft-minEnter;
	hrDifference1=hrDifference-12;
    if(minDifference<=9){
	printf("PARKING TIME   %d:0%dPM\n",hrDifference1,minDifference);
	}else{
    printf("PARKING TIME   %d:%dPM\n",hrDifference1,minDifference);
	}
	if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00PM\n",hrDifference1);
	}else{
       hrDifference1=hrDifference1+1;
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference1);
	   hrDifference=hrDifference+1;
	   }
 }else{
    hrDifference1=hrDifference-13;
	minDifference=minLeft+60-minEnter;
	if(minDifference<=9){
	printf("PARKING TIME   %d:0%dPM\n",hrDifference1,minDifference);
	}else{
    printf("PARKING TIME   %d:%dPM\n",hrDifference1,minDifference);
	}
	if(minDifference==0){
	   printf("ROUNDED TOTAL  %d:00PM\n",hrDifference1);
	   hrDifference=hrDifference-1;
	}else{
       hrDifference1=hrDifference1+1;
       printf("ROUNDED TOTAL  %d:00PM\n",hrDifference1);
	   }
       }	
}

    printf("               _________\n");

switch(toupper(typeVehicle)){
case 'C': 
   if(hrDifference<=3){
   totalCharges=0.00;
   }else{
   FR=0.00;
   hrDifference=hrDifference-3;
   SR=hrDifference*5.00;
   totalCharges=FR+SR;
   }
   printf("TOTAL CHARGES  PHP%0.2f",totalCharges);
   break;

case 'T':
   if(hrDifference<=2){
   FR=1.00*hrDifference;
   totalCharges=FR;
   }else{
   FR=2.00;
   hrDifference=hrDifference-2;
   SR=hrDifference*10.00;
   totalCharges=FR+SR;
   }
   printf("TOTAL CHARGES  PHP%0.2f",totalCharges);
   break;

case 'B':
   if(hrDifference<=1){
   FR=2.00*hrDifference;
   }else{
   FR=2.00;
   hrDifference=hrDifference-1;
   SR=hrDifference*10.00;
   totalCharges=FR+SR;
   }
   printf("TOTAL CHARGES  PHP%0.2f",totalCharges);
   break;
}
	 
/*if(typeVehicle=='C'||typeVehicle=='c'){
   if(hrDifference<=3){
   totalCharges=0.00;
   }else{
   FR=0.00;
   hrDifference=hrDifference-3;
   SR=hrDifference*5.00;
   totalCharges=FR+SR;
   }
}else if(typeVehicle=='T'||typeVehicle=='t'){
   if(hrDifference<=2){
   FR=1.00*hrDifference;
   totalCharges=FR;
   }else{
   FR=2.00;
   hrDifference=hrDifference-2;
   SR=hrDifference*10.00;
   totalCharges=FR+SR;
   }
}else if(typeVehicle=='B'||typeVehicle=='b'){
   if(hrDifference<=1){
   FR=2.00*hrDifference;
   }else{
   FR=2.00;
   hrDifference=hrDifference-1;
   SR=hrDifference*10.00;
   totalCharges=FR+SR;
   }
} 
    printf("TOTAL CHARGES  PHP%0.2f",totalCharges);
	*/
return 0;
}

