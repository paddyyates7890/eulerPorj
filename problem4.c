#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// find the largest palidrome product from two three diget numbers

int checkIfPalendrome(int value){
	char *strVal = malloc(sizeof("111111"));
	sprintf(strVal, "%d", value);
	int s = 0;
	int e = strlen(strVal) - 1;

	while(e > s){
		if (strVal[s++] != strVal[e--]) {
			return 0;
		}
	}
	printf("%s\n", strVal);	
	return 1;
}

int largestPalindromeProduct(){
	int tmp, ans = 0;
	int coef1 = 100;
	int coef2 = 100;

	while(coef2 < 1000){
		if (coef1 == 999) {
			coef1 = 100;
			coef2 += 1;
		}

		tmp = coef1 * coef2;
		printf("%d \n", tmp);
		if (checkIfPalendrome(tmp) == 1 && tmp > ans) {
			ans = tmp;
		}

		coef1 += 1;
	}
	
	return ans;
}

int main(){
	int ans = largestPalindromeProduct();
	printf("Final Ans: %d", ans);
}
