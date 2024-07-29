#include <stdio.h>
int main()
{
float price, change, amount, solution, rem1, rem2, rem3, rem4, rem5, rem6;

int n1, n2, n3, n4, n5, n6, deno, result;


printf("Enter Price: \n");

scanf("%f",&price);

printf("Cash recieved: \n");

scanf("%f",&amount);

price = price / 100.0;

amount = amount / 100.0;
change = amount - price;

printf("\nChange is = %2.2f\n",change);
/*Number1 */

n1 = change / 10;
result = n1 * 10;
rem1 = change - result;
printf("Denomination:\n\n 10 ==== %d\n", n1);
/*Number 2*/

n2 = (rem1 / 5);
result = n2 * 5;
rem2 = rem1 - result;
printf(" 5  ==== %d\n",n2);
/*Number 3*/
n3 = rem2 / 1;
result = n3 * 1;
rem4= rem2 - n3;
printf(" 1  ==== %d\n",n3);
/*Number 4*/
n4 = (rem4 / 0.5);
solution = n4 * 0.5;
deno = solution / .25;
rem5 = rem4 - solution;
printf(".25 ==== %d\n",deno);
/*Number 5*/
n5 = (rem5 / 0.10);
solution = n5 * 0.10;
rem6 = rem5 - solution;
printf(".10 ==== %d\n",n5);

/*Number 6*/

n6 = (rem6 / 0.05);
solution = n6 * 0.05;
printf(".5  ==== %d\n",n6);

return 0;

}

