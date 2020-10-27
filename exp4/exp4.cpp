#include<iostream>

int fib() {

}
int fx() {

}
int game() {

}


int main() {
	printf("Choose the function you want to use : \n1.Fibonacci sequence\n2.f(x)=0\n3.Game");
	int c;
	scanf("%d", &c);
	switch (c)
	{
	case 1:fib();
		break;
	case 2:fx();
		break;
	case 3:game();
		break;
	}
}
