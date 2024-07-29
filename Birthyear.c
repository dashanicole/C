#include<stdio.h>
	int asksAge();
	int asksCYear();
	void displayBYear();
	
	int asksAge() {
		int age;
		printf("How old are you? ");
		scanf("%d",&age);
		return age;
	}
	
	int asksCYear() {
		int cyear;
		printf("What year is now? ");
		scanf("%d",&cyear);
		return cyear;
	}	 
	
	void displayBYear(int age, int cyear) {
		printf("Your Birthyear is %d.", cyear-age);
	}

int main() {
	int a, cy;
	
	a = asksAge();
	cy = asksCYear();
	displayBYear(a,cy);
	
	return 0;
}

