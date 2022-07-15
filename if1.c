#include<stdio.h>

int main()
{
	auto int Marks = 0;

	printf("Enter your marks\n");
	scanf("%d",&Marks);

	printf("Your entered marks : %d\n",Marks);

	if (Marks >= 60)
	{
		printf("First class Bhava....\n");
	}
	else
	{
		printf("Try Your best next Exam Bro...\n");
	}

	return 0;
}