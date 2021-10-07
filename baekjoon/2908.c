#include <stdio.h>

int change(int num)
{
	int fir, sec, third;
	fir = num / 100;
	sec = (num % 100) / 10;
	third = num % 10;

	num = third * 100 + sec * 10 + fir;
	return num;
}
int main()
{
	int A, B;
	scanf("%d %d", &A, &B);


	
	A = change(A);
	B = change(B);

	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);

	return 0;
}
