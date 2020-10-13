#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include<math.h>

int perform() {

	printf("Solving the root of equation ax^2+bx+c=0\n Input a b c\n");
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) printf("x= %lf ", -c / b);
	else {
		double delta = (b * b) - (4 * a*c);
		if (delta > 0) {

			delta = sqrt(delta);
			printf("x1=%lf  x2=%lf", (delta - b) / (2 * a), (-delta - b) / (2 * a));
		}

		else {
			if ((b*b - 4 * a*c) == 0)
				printf("x1=%lf ", (-b) / (2 * a));
			else printf("No answer");

		}
	}
	return 0;
}

int swap() {
	int a, b;
	return 0;
}
int years() {
	int y, m, d;// 年月日
	scanf("%d%d%d", &y, &m, &d);
	return 0;
	int mo[13] = { 0,0,31,28,31,30,31,30,31,31,30,31,30, };//从一到十二月 定义
}

int main() {
	printf("1.Solving the root of equation\n2.Swap");
	int cho;
	scanf("%d", &cho);
	while (cho==1) perform();
	while (cho == 2) swap();
	return 0;
}
