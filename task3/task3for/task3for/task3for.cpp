#include <stdio.h>
#include <math.h>
int main() {
	int min = 7, max = 8;
	double h = 1, y;
	for (min; max >= min; min += h) {
		y = (2 * min + 1) * sqrt(min);
		printf("%.2lf\n", y);}
	return 0;}