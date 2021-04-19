/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long long num;
   int decimalNum, i, rem;

   cout << "Enter the binary number:\n";
   cin >> num;

   decimalNum = 0;
   i = 0;

   //converting binary to decimal
   while (num != 0)
   {
      rem = num % 10;
      num /= 10;
      decimalNum += rem * pow(2, i);
      ++i;
   }

   cout << "Equivalent hexadecimal value: " << decimalNum;

   return 0;
}

