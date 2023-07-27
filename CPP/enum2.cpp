#include<iostream>
using namespace std;

int main()
{
   enum Marvellous_Batches {PPA = 0, LB = 1, LSP = 2, Python = 3};
   int Fees[] = {15000,15000,17000,18000};
   float Duration[]= {3.5,4.0,3.5,4.5};
   int choice = 0;

   cout<<"Select the batch that you want yo join\n";
   cout<<"0 : PPA\n";
   cout<<"1 : Logic Building\n";
   cout<<"2 : Linux system programming\n";

   cin>>choice;

   switch(choice)
   {
        case PPA:
            cout<<"Thank you for selecting Pre-Placement Activity Batch\n";
            cout<<"Duration is : "<<Duration[PPA]<<"\n";
            cout<<"Fees are : "<<Fees[PPA]<<"\n";
            break;

         case LB:
            cout<<"Thank you for selecting logic Building Batch\n";
            cout<<"Duration is : "<<Duration[LB]<<"\n";
            cout<<"Fees are : "<<Fees[LB]<<"\n";
            break;

          case LSP:
            cout<<"Thank you for selecting Linux system programming Batch\n";
            cout<<"Duration is : "<<Duration[LSP]<<"\n";
            cout<<"Fees are : "<<Fees[LSP]<<"\n";
            break;

          default:
                cout<<"Sorry there is no such match\n";
                cout<<"Contact Admin :- 7666748856\n";

   }

    cout<<"Thank u for visiting Marvellous Infosystems\n";
   return 0;
}