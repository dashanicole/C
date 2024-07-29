#include <stdio.h>

int main(){ 
int n[10],i,posN=0,negN=0,oddN=0,evenN=0,largeN=i,smallN; 
	 
for(i=0;i<10;i++){ 
   printf("Input an integer number: "); 
   scanf("%d",&n[i]); 
   if(n[i]>0){
      posN+=1;
	  }else{
	  negN+=1;}
   if(n[i]%2==0){ 
      evenN+=1; 
	  }else{
      oddN+=1;
	  }
	  if(n[i]>largeN)
      largeN=n[i];
      if(n[i]<smallN)
      smallN=n[i]; 
	  }
	 
printf("\nNumber of positive numbers: %d\n",posN); 
printf("Number of negative numbers: %d\n",negN); 
printf("Number of odd numbers: %d\n",oddN); 
printf("Number of even numbers: %d\n",evenN); 
printf("Largest number: %d\n",largeN);
printf("Smallest number: %d\n",smallN); 

return 0;
}

