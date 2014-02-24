#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumSquareDiff(int num) {
	int sumSquare = 0;
	int squareSum = 0;
	for(int i=1; i<=num; i++) {
		sumSquare += pow(i, 2);
		squareSum += i;
	}
	squareSum = pow(squareSum, 2);
	return squareSum - sumSquare;
}

int main() {
	printf("%d\n", sumSquareDiff(100));
	return 0;
}