#include<iostream>
using namespace std;

void Call_Value(int no)
{
    no++;
}
void Call_Address(int *p)
{
    (*p)++;
}
void Call_Reference(int &ref)
{
    ref++;
}

int main()
{
    int a = 10, b = 10, c = 10;

    Call_Value(a);  //Call_value(10)
    cout<<a<<"\n";

    Call_Address(&b);   //Call_Address(200)
    cout<<b<<"\n";

    Call_Reference(c);   //Call_Reference(c)
    cout<<c<<"\n";

    return 0;
}