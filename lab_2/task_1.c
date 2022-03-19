// FIRST VERSION OF CODE (THE BEST)
#include <stdio.h>

int main()
{
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                for (int m = 0; m < 10; m++) {
                    if (i + j + k + m < 23) printf("%i ", i + j + k + m);  
                }
            }
        }
    }
    return 0;
}

// SECOND VERSION OF CODE
#include <stdio.h>

int main() {
	for (int i = 1000; i <= 9999; i++)
	{
		int a, s=0, x=i;
		for (int j = 1; j <= 4; j++) {
			a = x % 10;
			x = x / 10;
			s += a;
		}
		if (s < 23) {
			printf("%i, ", i);
		}
	}
	return 0;
