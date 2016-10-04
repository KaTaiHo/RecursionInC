#include <stdio.h>
#include <stdlib.h>

char* rindex(char str[], char val) {
	if (*str == 0) {
		return 0;
	}
	if (*str == val) {
		if (rindex(str + 1, val) == 0) {
			return str;
		}
		else {
			return rindex(str + 1, val);
		}
	}
	else {
		return rindex(str + 1, val);
		
	}
}

int main(void) {
	char* str = "abcbc";
	printf("%u\n", str + 4);
	printf("%u\n", rindex(str, 'c'));
	
}