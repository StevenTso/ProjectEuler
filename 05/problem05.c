#include <stdlib.h>
#include <stdio.h>

#define TRUE	0
#define FALSE	1

int tester(int valueIn) {
	for(int i=2; i<=20; i++) {
		if(valueIn%i != 0) {
			return FALSE;
		}
	}
	return TRUE;
}

int main() {
	int val = 20;
	while(tester(val)) {
		val++;
	}
	printf("%d\n", val);
	return 0;
}