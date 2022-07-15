#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int *ptr = NULL;

	printf("Enter number of elements : ");
	scanf("%d",&size);

	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		printf("Unable to allocate to memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}

	//step 2 : Use the Memory

	free(ptr);  //step 3: Free the Memory
	return 0;
}