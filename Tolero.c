#include<stdio.h>

int main(){

const float DISC=0.15,sell_price=510;
float orig_price;
orig_price = sell_price/(1-DISC);
printf("\nThe Original Price is Php %.2f", orig_price);

}


