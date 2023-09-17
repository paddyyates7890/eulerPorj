#include <stdio.h>

// find the smallest value that is a multiple of every value from 1 - 20
int getSmallestMultiple(){
	int testVal = 1;
	int notFound = 1;
	int ans;

	while (notFound) {
		for (int i = 1; i <= 20; i ++) {
			if (testVal % i == 0) {
				ans = testVal;
			}
			else {
				ans = 0;
				break;
			}
		}
		if (ans != 0) {
			notFound = 0;
		}
		testVal ++;
	}

	return ans;
}

int main(){
	int ans = getSmallestMultiple();
	printf(" %d\n", ans);
}
