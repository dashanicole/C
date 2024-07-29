#include <stdio.h>
int main(){
int fi=0,s=0,t=0,fo=0,score;
printf("Enter an exam score: ");
scanf("%d",&score);

while(0<=score&&score<=100){
      if(0<=score&&score<=25){
	  fi++;
	  }
	  else if(26<=score&&score<=50){
	  s++;
	  }
	  else if(51<=score&&score<=75){
	  t++;
	  }
	  else{
	  fo++;
	  }
	  printf("Enter an exam score: ");
      scanf("%d",&score);
	  }
	  printf("\n0 to 25: %d",fi);
	  printf("\n26 to 50: %d",s);
	  printf("\n51 to 75: %d",t);
	  printf("\n76 to 100: %d",fo);
	  return 0;
	  }
	  

