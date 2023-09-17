#include <stdio.h>

int squares(){
	int ans;
	int number1 = 0;
	int number2 = 0;
	// sum of the squares
	for (int i = 1; i < 101; i++) {
		number1 = number1 + (i * i);
	}

	// square of the sum
	for (int j = 1; j < 101; j++) {
		number2 = number2 + j;
	}
	number2 = (number2 * number2);

	ans = number2 - number1;
	return ans;
}

int main(){
	int ans = squares();
	printf("%d\n", ans);
}
