#include <stdio.h>
// find the sum of all of the even numbers in the fibbonachi sequence where the fib does not exceed 4000000

int findFibonacciEvenSum(){
	int fib1	= 1;
	int fib2	= 2;
	int sum		= 2;
	int fib		= 0;

	while (fib < 4000000){
		fib = fib1 + fib2; 
		if ((fib % 2) == 0){
			sum = sum + fib;
		}

		fib1 = fib2;
		fib2 = fib;
	}

	return sum;
}

int main(){
	int sum = findFibonacciEvenSum();

	printf("%d ", sum);
}
