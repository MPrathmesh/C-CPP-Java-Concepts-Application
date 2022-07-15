#include<stdio.h>

int main()
{	
	int marks[200],lc,studs,sum=0;
	float average;
	printf("Enter the number of student in class\n");
	scanf("%d",&studs);
	printf("Enter marks of student\n\n");
	for(lc=0;lc<studs;lc++)
	{
		printf("Enter marks of student %d\n",lc+1);
		scanf("%d",&marks[lc]);
	}
	for(lc=0;lc<studs;lc++)
		sum=sum+marks[lc];
	average=(float)sum/studs;
	printf("\nAverage marks of the class is %f\n",average);

	return 0;
}