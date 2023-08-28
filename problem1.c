#include <stdio.h>
// find the total of all of the multiples of 3 or 5 ;ess than 1000

int findMult3Or5(){
	int i = 0;
	int total = 0;

	for (i = 0; i < 1000; i++) {
		if ((i % 3) == 0) {
			total += i;
		}
		else if ((i % 5) == 0){
			total += i;
		}
	}

	return total;
}


int main(){
	int total = findMult3Or5();

	printf("%d", total);
}
