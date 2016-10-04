#include <stdio.h>

void factor(int n, int f, char* p) {

	char empty[1] = {'\0'};

	if (n % f == 0) {
		if (n/f == 1) {
			printf(" %d\n",f);
			return;
		}
		else{
			printf("%s", p);
			printf(" %d x", f);
			factor(n/f, f, empty);
		}
	}
	else if (n % f != 0) {
		factor(n, f + 1, empty);
	}
}

int main(void) {
	char* p = "n =";
	factor(84, 2, p);
	
	return 0;
}