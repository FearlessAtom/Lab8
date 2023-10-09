//#include <stdio.h>
//int main() {
//	double result = 1500;
//	int months = 12;
//	while (months > 0) {
//		result = result * 1.0076;
//		months--;}
//	printf("The result in one year is : %.2lf\n", result);
//	return 0;}
#include <stdio.h>
int main(){
	double result = 1500;
	int months = 12;
	for (int index = 0; index < months; index++) {
		result = result * 1.0076;}
	printf("The rsult in one year is %.2lf", result);
	return 0;}