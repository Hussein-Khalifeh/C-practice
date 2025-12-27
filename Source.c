#include <stdio.h>
int main() {
	float a, b, c, d, e, f, dx, dy, dt=0 ,x , y ;
	while (dt == 0) {
		printf("enter the values: \n");
		scanf_s("%f %f %f %f %f %f ", &a, &b, &c, &d, &e, &f);
		dt = a * d - b * c;
		if (dt == 0) {
			printf("infinity of solutions\nplease reenter values:");
		}
	}
	dx = e * d - b * f;
	dy = a * f - e * c;
	x = dx / dt , y = dy / dt;
	printf("x = %f \n y = %f", x, y);
	return 0;
}