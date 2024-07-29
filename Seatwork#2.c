#include<stdio.h>
int detLevel(int mmr){
   if(0<=mmr&&mmr<=720) 
   printf("\nLevel: Herald");
   else if(840<=mmr&&mmr<=1560) 
   printf("\nLevel: Guardian");
   else if(1680<=mmr&&mmr<=2400)
   printf("\nLevel: Crusader");
   else if(2520<=mmr&&mmr<=3240)
   printf("\nLevel: Archon");
   else if(3360<=mmr&&mmr<=4080)
   printf("\nLevel: Legend");
   else if(4200<=mmr&&mmr<=4920)
   printf("\nLevel: Ancient");
   else if(5040<=mmr&&mmr<=5760)
   printf("\nLevel: Divine");
   else if(mmr>=6000)
   printf("\nLevel: Immortal");
}

int main(){
   int mmr,Level;
   printf("Input your match making rank(mmr): ");
   scanf("%d", &mmr);
   printf("\nMMR: %d",mmr);
   Level=detLevel(mmr);
}

