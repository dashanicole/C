#include <stdio.h> 

	int acceptnum() {
		int num;
		scanf("%d",&num);
		return num;
	}

	int computenum(int a,int b) {
		return a+b;
	}

	void asknum(int ask) {
		switch(ask){
			case 1: printf("Enter a first number: ");break;
			case 2: printf("Enter a second number: ");break;
		}
	}

	void printsum(int a,int b,int sum) {
		printf("The sum of %d and %d is %d",a,b,sum);
	}

int main() {
	int fn,sn,sum;
	
	asknum(1);
	fn=acceptnum();
	asknum(2);
	sn=acceptnum();
	sum=computenum(fn,sn);
	printsum(fn,sn,sum);
	
	return 0;
} 

/*
#include <stdio.h>

	int subjgrade() {
		int grade;
		scanf("%d",&grade);
		return grade;
	}

	int compAve(int a,int b,int c,int d) {
		return ((a+b+c+d)/4);;
	}

	void askgrade(int subj) {
		switch(subj) {
			case 0: printf("Math grade: ");break;
			case 1: printf("Science grade: ");break;
			case 2: printf("English grade: ");break;
			case 3: printf("Filipino grade: ");break;
		}
	}

	void printAve(int a,int b,int c, int d,int ave) { 
		printf("\n   GRADES\n");
		printf("Math grade: %d\n",a);
		printf("Science grade: %d\n",b);
		printf("English grade: %d\n",c);
		printf("Filipino grade: %d\n",d);
		printf("General Average: %d\n",ave);
	}

int main() {
	int m,s,e,f,average;
	
	askgrade(0);
	m=subjgrade();
	askgrade(1);
	s=subjgrade();
	askgrade(2);
	e=subjgrade();
	askgrade(3);
	f=subjgrade();
	average=compAve(m,s,e,f);
	printAve(m,s,e,f,average);
	
	return 0;
}
*/


