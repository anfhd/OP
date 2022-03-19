#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	printf("%f", pow(y, x) + sqrt((fabs(x) + fabs(y))));
	return 0;
}
