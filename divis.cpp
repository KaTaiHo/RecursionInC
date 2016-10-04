#include <stdio.h>

int isDivis(int x, int k) {
	if (x % k == 0 &&  k >= 2) {
		return 1;
	}
	if (k > 2) {
		return isDivis(x , k - 1);
	}
	else {
		return 0;
	}
}

int main(void) {
	if (isDivis(5, 2) == true) {
		printf("is true\n");
	}
	else {
		printf("false\n");
	}
}