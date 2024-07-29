#include <stdio.h>
int main(){
float price, amount, change, solution, a10, a5, a1, a_25, a_10, a_5;
int pesos10, pesos5, peso1, cents25, cents10, cents5, result, denom;

printf("Input the price of an item: \n");
scanf("%f", &price);
printf("Input the tendered amount: \n");
scanf("%f", &amount);

price = price/100.0;
amount = amount/100.0;
change = amount-price;
printf("\nPrice of the item is %2.2f\n", price);
printf("Tendered amount is %2.2f\n", amount);
printf("\nChange: %2.2f", change);

/*10 pesos*/
pesos10 = change/10;
result = pesos10*10;
a10 = change-result;
printf("\n\n   Coin Denomination \n\n  10 pesos: %d piece/s", pesos10);

/*5 pesos*/
pesos5 = a10/5;
result = pesos5*5;
a5 = a10-result;
printf("\n   5 pesos: %d piece/s", pesos5);

/*1 pesos*/
peso1 = a5/1;
result = peso1*1;
a1 = a5-peso1;
printf("\n    1 peso: %d piece/s", peso1);

/*25 cents*/
cents25 = a1/.5;
solution = cents25*.5;
denom = solution/.25;
a_25 = a1-solution;
printf("\n0.25 cents: %d piece/s", denom);

/*10 cents*/
cents10 = a_25/.10;
solution = cents10*.10;
a_10 = a_25-solution;
printf("\n0.10 cents: %d piece/s", cents10);

/*5 cents*/
cents5 = a_10/.05;
solution = cents5*.05;
printf("\n0.05 cents: %d piece/s", cents5);

return 0;
}

