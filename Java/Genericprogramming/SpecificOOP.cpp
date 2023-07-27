using namespace std;
#include<iostream>

class Arithmatic
{
    public:
        int No1, No2;

        Arithmatic(int a, int b)
        {
            No1 = a;
            No2 = b;
        }

        int Addition()
        {
            int ans = 0;
            ans = No1 + No2;
            return ans;
        }

        int Subtraction()
        {
            int ans = 0;
            ans = No1 - No2;
            return ans;
        }
};

int main()
{
    Arithmatic obj(10,11);
    int ret = obj.Addition();
    cout<<"Addition is :"<<ret<<"\n";

    return 0;
}