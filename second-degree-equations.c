#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, x1 , x2 , d;
	printf("enter values of a , b and c: ");
	scanf_s("%f %f %f", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d < 0) {
		printf("no real roots");
	}
	else if (d == 0){
	x1 = x2 = -b / (2*a);
	printf("roots are x1=x2=%f", x1);
	}
	else {
		x1 = (-b - sqrt(d)) / (2*a);
		x2 = (-b + sqrt(d)) / (2*a);
		printf("roots are %f %f ", x1 , x2);
	}
	return 0;
}
