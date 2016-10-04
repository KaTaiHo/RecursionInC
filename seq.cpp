#include <stdio.h>

int subSeq(char* seq, char* str) {
	if (*seq == 0) {
		return 1;
	}
	if (*str == 0) {
		return 0;
	}
	if (*seq != *str) {
		return subSeq(seq, str + 1);
	}
	else if (*seq == *str) {
		return subSeq(seq + 1, str + 1);
	}
	else {
		return 0;
	}
}

int main(void) {
	char* str1 = "abc";
	char* str2 = "apple cbees";


	if (subSeq(str1, str2) == 1) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}
	
	return 0;
}