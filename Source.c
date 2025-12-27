#include <stdio.h>
int main() {
	long long int a=-1, n = 1;
	while (a < 0) {
		printf("enter a number: ");
		scanf_s("%lld", &a);
	}
	if (a == 0) {
		printf("0! = 1");
	}
	else {
		for (long long int i = a; i > 1; i--) {
			n *= i;
		}
		printf("%lld", n);
	}
	return 0;

}