#include<stdio.h>

int strlenX(char str[])
{
	int iCnt = 0;
	int iLength = 0;

	for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
	{
		iLength++;
	}
	return iLength;
}

int main()
{
	char Arr[] = "Marvellous";
	int iRet = 0;

	iRet = strlenX(Arr);

	printf("String lenght %d\n",iRet);

	return 0;
}