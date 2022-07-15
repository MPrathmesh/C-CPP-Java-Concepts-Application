#include<stdio.h>

int main()
{
	char cValue = 'M';
	char *cPtr = &cValue;

	int iValue = 21;
	int *iPtr = &iValue;

	float fValue = 10.11;
	float *fPtr = &fValue;

	double dValue = 20.11;
	double *dPtr = &dValue;

	printf("%c\n",*cPtr); //M
	printf("%d\n",&cValue); //100
	printf("%d\n",cPtr);    //100
	printf("%d\n",sizeof(cValue)); //1
	printf("%d\n",sizeof(cPtr)); //8
	printf("%d\n",sizeof(*cPtr));//8

	return 0;
}