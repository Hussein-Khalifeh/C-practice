#include <stdio.h>
#include <math.h>
int main() {
	int a = 0, b = 0, c, d, gcd , lcm ;
	while (a == 0 && a == b) {
		printf("enter 2 numbers: ");
		scanf_s("%d %d", &a, &b);
	}
	a = abs(a);  b = abs(b);
	c = a, d = b;
	if (a == b) {
		gcd = lcm = a;
	}
	while (a != b) {
		if (a != 0 && b != 0 && a > b) {
			a -= b;
			gcd = a;
			lcm = c * d / gcd;
		}
		else if (a != 0 && b != 0 && a < b) {
			b -= a;
			gcd = b;
		}
		else {
			if (a == 0) {
				printf("GCD is %d and LCM is 0", b);
				gcd = b;
				break;
			}
			else {
				printf("GCD is %d and LCM is 0", a);
				gcd = a;
				break;
			}
		}

	}
	
	if (a != 0 && b != 0) {
		lcm = c * d / gcd;
		printf("GCD is %d \nLCM is %d ", gcd,lcm);

	}
	
	return 0;
}