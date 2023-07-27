#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}

namespace Infosystems
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";

    using namespace Marvellous;
    using namespace Infosystems;

    //fun(); //aMbiguity
    Infosystems::fun();

    return 0;
}