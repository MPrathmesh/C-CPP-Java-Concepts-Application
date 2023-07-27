using namespace std;
#include<iostream>

template <class T>
class Arithmatic
{
    public:
        T No1; 
        T No2;

        Arithmatic(T a, T b)
        {
            No1 = a;
            No2 = b;
        }

        T Addition()
        {
            T ans;
            ans = No1 + No2;
            return ans;
        }

        T Subtraction()
        {
            T ans;
            ans = No1 - No2;
            return ans;
        }
};

int main()
{
    Arithmatic <int>iobj(10,11);
    int ret = iobj.Addition();
    cout<<"Addition is :"<<ret<<"\n";

    Arithmatic <double>dobj(10.9,11.5);
    double dret = dobj.Addition();
    cout<<"Addition is :"<<dret<<"\n";

    return 0;
}