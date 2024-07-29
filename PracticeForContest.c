#include <stdio.h>
#include <conio.h>
	int findMin(int arr[], int arr_len);
	int findMax(int arr[], int arr_len);
	int findSum(int arr[], int arr_len);
	void displayResult(int min, int max, int sum);
	
int main() {
	int arr[1000], arr_len, min, max, sum, x = 0;
	
	printf("Enter an array length: ");
	scanf("%d",&arr_len);


	/*printf("\nEnter elements of an array: ");*/
    for ( ; x < arr_len ; x++) {
		printf("Enter an element of arr[%d]: ", x);
		scanf("%d",&arr[x]);
	}
	
	min = findMin(arr,arr_len);
	max = findMax(arr,arr_len);
	sum = findSum(arr,arr_len);

	displayResult(min,max,sum);
	
	return 0;
}

	int findMin(int arr[], int arr_len) {
		int x = 1, min = 0;
		
		for ( ; x < arr_len ; x++) 
			min = arr[min] < arr[x] ? min : x;	  	  
		
		return arr[min];
	}
	
	int findMax(int arr[], int arr_len) {
		int x = 1, max = 0;
		
		for ( ; x < arr_len ; x++) 
			max = arr[max] > arr[x] ? max : x;	  	  
		
		return arr[max];
	}
	
	int findSum(int arr[], int arr_len) {
		int x = 0, sum = 0;
		
		for ( ; x < arr_len ; x++) 
			sum += arr[x];	  	  
		
		return sum;
	}
	
	void displayResult(int min, int max, int sum) {
		printf("\nThe min is %d\n", min);
		printf("The max is %d\n", max);
		printf("The sum is %d\n", sum);
	}
	

