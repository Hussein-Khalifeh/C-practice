#include <stdio.h>
int main() {
	float S=0,a;
	int i, I=0;
	i = 0;
	while (i < 15) {
		printf("enter a number: ");
		scanf_s("%f", &a);
		I += 1;
		S += a;
		i++;
	}
	S /= 15;
	printf("Average is %f", S);
	return 0;
}
