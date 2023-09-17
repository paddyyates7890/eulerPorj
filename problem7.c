#include <stdio.h>

int primeNumbers(int num){
	int count = 1;
	int current;
	int number = 1;
	int flag = 0;
	
	while (count < num) {
		for (int i = 2; i < number; i++) {
			if (number % i != 0 && number != i) {
				current = number;
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
		}

		if (flag == 1) {
			count ++;
		}
		number ++;
	}

	return current;
}

int main(){
	int ans = primeNumbers(10001);
	printf("%d \n", ans);
}
