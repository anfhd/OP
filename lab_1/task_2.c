#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, max, min;
	scanf("%f %f %f", &x, &y, &z);
	max = x;
	min = y;
	if (y > max) max = y;
	if (z > max) max = z;
	if (z < min) min = z;
	printf("%f", (max - x * min) / (x * y * z + x * x + y * y * y));
	//не використовуйте pow() для піднімання до квадрату\кубу
	return 0;
}
