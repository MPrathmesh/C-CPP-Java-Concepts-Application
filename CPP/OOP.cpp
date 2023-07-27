#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    //characteristics
    int iNo1;
    int iNo2;

    //Behaviour

    Arithmatic()   //Default Constructor
    {
        cout<<"Inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithmatic(int A, int B)  //Parametrized Constructor
    {
        cout<<"Inside parametrised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Arithmatic()   //Destructor
    {
        cout<<"Inside Destructor\n";
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    int Subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number\n";
    cin>>iValue1;                 //11

    cout<<"Enter Second number\n";
    cin>>iValue2;                  //10

    Arithmatic obj1; //Default constructor
    Arithmatic obj2(iValue1, iValue2);  //Parametrised constructor

    iRet = obj2.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj2.Subtraction();
    cout<<"Subtraction is : "<<iRet<<"\n";

    return 0;
}