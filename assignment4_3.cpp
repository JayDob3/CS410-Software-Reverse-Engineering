/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
   int i,j,r;
    cout << "Enter number of rows\n";
    cin >> r;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
}


