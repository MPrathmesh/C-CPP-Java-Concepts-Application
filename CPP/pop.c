#include<stdio.h>

int addition(int iNo1, int iNo2)
{
	auto int iAns = 0;

	iAns = iNo1 + iNo2;
	return iAns;
}

int subtraction(int iNo1, int iNo2)
{
	auto int iAns = 0;

	iAns = iNo1 - iNo2;
	return iAns;
}
int main()
{
	auto int iValue1 = 0, iValue2 = 0, iRet = 0;

	printf("Enter first number\n");
	scanf("%d", &iValue1);

	printf("Enter second number\n");
	scanf("%d", &iValue2);

	iRet = addition(iValue1, iValue2);
	printf("Addition is: %d\n", iRet);

	iRet = subtraction(iValue1, iValue2);
	printf("subtraction is : %d\n", iRet);

    return 0;
}