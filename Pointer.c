/*
#include <stdlib.h>

int main() {
	int age = 21;
	int* ptr = &age;
	
 	printf("%d\n", age); 
	printf("%p\n", &age); 
	printf("%p\n", ptr); 
	
	return 0;
} */

/*
#include <stdio.h>
#include <conio.h>
	
int main(){
	char fname[] = "Diether", lname[1000]; 
	
	printf("What is your last name? ");
	scanf("%s",&lname);

	printf("%s %s\n", fname,lname);

	return 0;
} */

/*
#include <stdio.h>
#include <string.h>
	
int main(){
	char word[1000];
	int  word_len, y, num[100], num_len, x = 0, i;
	
	printf("What word to reverse? ");
	scanf("%s",&word);
	
	word_len = strlen(word);
	
	for (y = word_len-1 ; y >= 0 ; y--)
			printf("%c", word[y]);
	
	printf("\n\nEnter a length for num[]: ");
	scanf("%d",&num_len);
	
	for ( ; x < num_len ; x++) { 
		printf("Enter an element for num[%d]: ", x);
		scanf("%d",&num[x]);
	}
	
	printf("\nReverse Order: ");
	
	for (i = num_len-1 ; i >= 0 ; i--)	  
		printf("%d ", num[i]);
	
	return 0;
} */

#include <stdio.h>
	int length(char *name) {
	int a = 0;
	for ( ; name[a] != '\0' ; a++);	   	   
	return a;
	}

int main() {
	char name[100];
	printf("Enter your name: ");
	scanf("%s", name);
		
	printf("%d", length(name));
	return 0;	 
}


