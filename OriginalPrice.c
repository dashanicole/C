#include <stdio.h>

int main(){
const int discount = 15;
const int discountedPrice = 510;
float originalPrice;

originalPrice = discountedPrice/(1-discount/100.0);

printf("The original price is Php %f.", originalPrice);
return 0;
}



