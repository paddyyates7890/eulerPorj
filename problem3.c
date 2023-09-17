#include <stdio.h>
// find the largest prime factor of a given number 
long largesPrimeFactor(long num){
	long prime = -1;

	while (num % 2 == 0) {
		prime = 2;
		num >>= 1;
	}

	while (num % 3 == 0) {
		prime = 3;
		num = num / 3;
	}

	for (int i = 5; i*i<=num; i += 6) {
		while (num % i == 0) {
			prime = i;
			num = num / i;
		}
		
		while (num % (i + 2) == 0) {
			prime = i + 2;
			num = num / (i + 2);
		}
	}
	
	if (num > 1) {
		prime = num;	
	}

	return prime;
}

int main(){
	long ans = largesPrimeFactor(600851475143);
	printf("%li", ans);
}
