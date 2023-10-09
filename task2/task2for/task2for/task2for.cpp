#include <stdio.h>
#include <math.h>
int main() {
    int n;
    printf("What is the value of n : "); scanf_s("%d", &n);
    double expression = 0.0;
    for (int index = 1; index <= n; index++) {
        expression = expression + (1 + 1.0 / pow(index, 2));}
    printf("%.2lf\n", expression);
    return 0;}
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int n;
//	printf("What is the value for n : "); scanf_s("%d", &n);
//	double expression = 0.0;
//	while (n > 0) {
//		expression = expression + (1 + 1. / pow(n, 2));
//		n--;
//	}
//	printf("%.2lf", expression);
//	return 0;
//}