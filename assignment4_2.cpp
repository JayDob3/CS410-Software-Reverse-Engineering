/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define PI 3.14159
using namespace std;

    int main()
    {
    	float radius, area, circum;
    	cout<<"Enter Radius:\n";
    	cin>>radius;
	
		circum = 2*PI*radius;
		area = PI*(radius*radius);
        		
		
        cout << endl;
        return 0;
    }

