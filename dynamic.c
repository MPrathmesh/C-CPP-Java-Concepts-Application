#include<stdio.h>
#include<stdlib.h>


int main()
{
	int size = 0;
	int *ptr = NULL;

	printf("Enter number of elements : \n");
	scanf("%d",&size);

	ptr = (int *)malloc(size * sizeof(int)); //step 1 : allocate the memory
	if (ptr == NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory succssfully allocated\n");
	}
	// step 2 : Use the memory

	free(ptr); 			//step 3 : Free the memory

	return 0;
}