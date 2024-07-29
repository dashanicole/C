#include <stdio.h>
long long DectoBin(int dec,long long int bin,int rem,int i){ 
  while(dec!=0){
    rem=dec%2;
    dec/=2;
    bin+=rem*i;
    i*=10;
  }
  return bin;
}
void dispResult(int dec,long long int bin){
printf("\nDECIMAL TO BINARY CONVERSION\n");
printf("%d in decimal = %d in binary",dec,bin);
}

int main(){
  int dec,rem,i=1;
  long long int bin=0;
  printf("Enter a decimal number (0-256): ");
  scanf("%d",&dec);
  bin=DectoBin(dec,bin,rem,i);
  dispResult(dec,bin);
}


