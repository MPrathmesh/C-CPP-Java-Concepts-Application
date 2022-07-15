#include<stdio.h>

extern int add();

int main()
{

	int A = 10,B = 20,C;

	C=add(A,B);
	printf("%d\n",C);
	
	return 0;
}