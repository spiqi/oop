#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>

int fib() {
	int n;
	printf("input the length of Fibonacii :n:\n");
	scanf("%d", &n);
	int *p = new int[n+1];
	*(p + 1) = 1;
	*(p + 2) = 1;
	for (int i = 3; i <= n; i++)
		*(p + i) = *(p + i - 1) + *(p + i - 2);
	for (int i = 1; i <= n; i++)
		printf("%d ", *(p + i));
	return 0;
}
int fx() {
	return 0;
}
int game() {
	return 0;
}


int main() {
	printf("Choose the function you want to use : \n1.Fibonacci sequence\n2.f(x)=0\n3.Game\n0.exit\n");
	int c;
	scanf("%d", &c);
	while(c){
	switch (c)
	{
	case 1:fib();
		break;
	case 2:fx();
		break;
	case 3:game();
		break;
	}
	printf("\nChoose the function you want to use : \n1.Fibonacci sequence\n2.f(x)=0\n3.Game\n0.exit\n");
	scanf("%d", &c);
	}
	
}
