﻿#include <stdio.h>
#include <math.h>
int main(){
	double h = 0.1, y, min = 1, max = 1.5;;
	for (min; min <= max; min += h) {
		y = pow(min, 1 / 5) * cos(min);
		printf("%.2lf\n", y);}
	return 0;}