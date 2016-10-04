#include <stdio.h>


typedef struct Result {   
	int min;   
	int max;   
	int mean; 
} Result;

Result arrayStats(int x[], int N) {
	Result A;
	A.max = x[N - 1];
	A.min = x[N - 1];
	A.mean = x[N - 1];

	if (N == 1) {
		return A;
	}
	if (A.max < arrayStats(x, N - 1).max) {
		A.max = arrayStats(x, N - 1).max;
	}
	if (A.min > arrayStats(x, N - 1).min) {
		A.min = arrayStats(x, N - 1).min;
	}
	A.mean += arrayStats(x, N - 1).mean * (N - 1);
	A.mean = A.mean / N;
	
	return A;
}

int main(void) {
	int x[5] = {10, 20, 30, 40, 50};
	printf("max: %d, min: %d, mean: %d\n", 
		arrayStats(x, 5).max, arrayStats(x, 5).min, arrayStats(x, 5).mean);

	return 0;
}