#include <stdio.h>

int main(void){
	char animal;
	
	printf("Enter an vowel letter: ");
	scanf("%c",&animal);

	switch(tolower(animal)){
		case 'a':printf("ASO");break;
		case 'e':printf("ERENG");break;
		case 'i':printf("IBON");break;
		case 'o':printf("OUD");break;
		case 'u':printf("UNGGOY");break;

		default:printf("BWALA");break;
	}

	return 0;
}



