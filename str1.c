#include<stdio.h>
#include<string.h>

int main()
{
	//first way
	char Arr[5] = {'a','b','c','d','\0'};

	//second way
	char Brr[5] = "abcd";

	printf("%s\n",Arr);

	printf("%s\n",Brr);

	printf("%c\n",Arr[0]);
	printf("%c\n",Arr[1]);
	printf("%c\n",Arr[2]);
	printf("%c\n",Arr[3]);

	printf("Size of string Arr : %d\n",sizeof(Arr));
	printf("Size of string Brr : %d\n",sizeof(Brr));

	printf("Lenght of string is %d\n",strlen(Arr));
	printf("Lenght of string is %d\n",strlen(Brr));

	return 0;
}