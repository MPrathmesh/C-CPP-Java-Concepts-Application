#include<stdio.h>

int fun()
{
	auto int i = 10;
	register auto int j = 20;
	int ret = 0;

	ret = i + j;

	return ret;
}

int main()
{
	printf("Inside main\n");
	fun();

	return 0;
}