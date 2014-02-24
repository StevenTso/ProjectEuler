#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define LARGESTVAL	999
#define TRUE	0
#define FALSE	1

int largestPali(int valueIn) {
	int reverse = 0;
	int temp = valueIn;

	while( temp != 0 )
	{
		reverse = reverse * 10;
		reverse = reverse + temp%10;
		temp = temp/10;
	}

	if(reverse == valueIn) {
		return TRUE;
	}
	else {
		return FALSE;
	}
};

int main() {
	int val = 0;
	int curr;
	for(int a = LARGESTVAL; a>0; a--) {
		for(int b = LARGESTVAL; b>0; b--) {
			curr = a*b;
			if(largestPali(curr) == TRUE && curr > val) {
				val = curr;
			}
		}
	}
	printf("%d\n", val);
	return 0;
}