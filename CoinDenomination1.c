#include<stdio.h>

int main(){
int price, amount, change;
float price1, amount1, change1;
int pesos10, pesos5, peso1, cents25, cents10, cents5;
float d1, d2, d3, d4, d5, d6;
float a10, a5, a1, a_25, a_10, a_5;

printf("Input the price of an item: \n");
scanf("%d", &price);
printf("Input the tendered amount: \n");
scanf("%d", &amount);

change = amount-price;
change1 = change/100.0;
price1 = price/100.0;
amount1 = amount/100.0;
 
pesos10 = change/1000;
a10 = pesos10*1000;
d1 = change-a10;

pesos5 = d1/500;
a5 = pesos5*500;
d2 = change-(a10+a5);

peso1 = d2/100;
a1 = peso1*100;
d3 = change-(a10+a5+a1);

cents25 = d3/25;
a_25 = cents25*25;
d4 = change-(a10+a5+a1+a_25);

cents10 = d4/10;
a_10 = cents10*10;
d5 = change-(a10+a5+a1+a_10+a_25);

cents5 = d5/5;
a_5 = cents5*5;

printf("\nPrice of the item is %2.2f\n", price1);
printf("Tendered amount is %2.2f\n", amount1);
printf("\nChange: %2.2f", change1);

printf("\n\nCoin Denomination");
printf("\n\n  10 pesos: %d piece",pesos10,a10);
printf("\n   5 pesos: %d piece",pesos5,a5);
printf("\n    1 peso: %d piece",peso1,a1);
printf("\n0.25 cents: %d piece",cents25,a_25);
printf("\n0.10 cents: %d piece",cents10,a_10);
printf("\n0.05 cents: %d piece",cents5,a_5);

return 0;
}

