/*
#include<stdio.h>
int StreakMessage(int heroEliminate,int preKill){
while(heroEliminate>=0){
     heroEliminate=heroEliminate+preKill;
     if(heroEliminate==0){
	 printf("\nEliminated by other Hero\n");}
	 else if(heroEliminate==1){
	 printf("\nHero eliminated\n");}
	 else if(heroEliminate==2){
	 printf("\nHero eliminated\n");}
	 else if(heroEliminate==3){
	 printf("\nKilling Spree\n");}
	 else if(heroEliminate==4){
	 printf("\nDominating\n");}
	 else if(heroEliminate==5){
	 printf("\nMega Kill\n");}
	 else if(heroEliminate==6){
	 printf("\nUnstoppable\n");}
	 else if(heroEliminate==7){
	 printf("\nWicked Sick\n");}
	 else if(heroEliminate==8){
	 printf("\nMonster Kill\n");}
	 else if(heroEliminate==9){
	 printf("\nGODLIKE!\n");}
	 else if(heroEliminate>=10){
	 printf("\nBEYOND GODLIKE!!!\n");
	 }
	 preKill=heroEliminate;
	 printf("\nHero Eliminated? \n");
	 scanf("%d",&heroEliminate);
	 }
	 printf("\nEXIT!");
	 }

int main(){
int heroEliminate,StrkMssg,preKill;
printf("Hero Eliminated? \n");
scanf("%d",&heroEliminate);
StrkMssg=StreakMessage(heroEliminate,preKill);
} */

#include<stdio.h>
int streakmessage(int heroeliminated,int prekill){
while(heroeliminated>=0){
     heroeliminated+=prekill;
	 if(heroeliminated==0)
     printf("\nEliminated by other Hero\n");
	 else if(heroeliminated==1)
	 printf("\nHero eliminated\n");
	 else if(heroeliminated==2)
	 printf("\nHero eliminated\n");
     else if(heroeliminated==3)
	 printf("\nKilling Spree\n");
	 else if(heroeliminated==4)
	 printf("\nDominating\n");
	 else if(heroeliminated==5)
	 printf("\nMega Kill\n");
	 else if(heroeliminated==6)
	 printf("\nUnstoppable\n");
	 else if(heroeliminated==7)
	 printf("\nWicked Sick\n");
	 else if(heroeliminated==8)
	 printf("\nMonster Kill\n");
	 else if(heroeliminated==9)
	 printf("\nGODLIKE!\n");
	 else if(heroeliminated>=10)
	 printf("\nBEYOND GODLIKE!!!\n");
	 
	 prekill=heroeliminated;
	 printf("\nHero Eliminated? ");
	 scanf("%d",&heroeliminated);
	 }
	 printf("EXIT!\n");
	 }

int main(){
int heroEliminated,streakMessage,preKill=0;
printf("Hero Eliminated? ");
scanf("%d",&heroEliminated);
streakMessage=streakmessage(heroEliminated,preKill);
}

