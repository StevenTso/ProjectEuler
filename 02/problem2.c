#include <stdio.h>
#include <stdlib.h>

//where n is the n'th number in the sequence
int fib(int n) {
	if(n==0) {
		return 0;
	}
	else if(n==1) {
		return 1;
	}
	else {
		return fib(n-1)+fib(n-2);
	}
}

int main() {
	int sum = 0;
	int val = fib(2);
	int incrementer = 2;
	while(val<=4000000) {
		if(val % 2 == 0) {
			sum += val;
		}
		val = fib(++incrementer);
	}
	printf("%d\n", sum);
	return 0;
}