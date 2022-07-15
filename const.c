#include<stdio.h>


int main()
{
	//no1 is a variable of type integer
	//initialised with 10
	int no1 = 10;

	//no2 is a variable of type integer constant
	//initialised with 10
	const int no2 = 10;

	//Arr is one dimensional array which contains
	//4 elements each element of type int
	int Arr[4] = {10,20,30,40};

	//Brr is one dimensional array which contains
	//$ elements each element is of type integer constant
	const int Brr[4] = {10,20,30,40};

	no1++;

	//no2++; //error

	Arr[0] = 11;

	//Brr[0] = 11; //error


 return 0;
}