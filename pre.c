#include<stdio.h>
#include<string.h>

union Data
{
	int daily;
	float coding;
	char habit[2];
};

int main()
{
	union Data data;
	printf("%d\n",sizeof(data));

	return 0;
}
