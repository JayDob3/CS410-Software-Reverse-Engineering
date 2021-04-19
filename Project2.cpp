//============================================================================
// Name        : Project2.cpp
// Author      : Janera Dobson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string username = "";
string password = "";
string client = "";

void DisplayInfo() {
    cout << "What would you like to do?" << endl;
    cout << "DISPLAY the client list (enter 1)" << endl;
    cout << "CHANGE a clients choice (enter 2)" << endl;
    cout << "Exit program.. (enter 3)" << endl;
    
}

void CheckUserPermissionAccess() {
    cout << "Enter your username: " << endl;
    cin >> client;
    
    cout << "Enter password: " << endl;
    cin >> password;
    
    if(password == "22420"){
        cout <<"You chose" << endl;
    } else {
        cout << "Invalid Password. Please try again" << endl;
    }
}

void ChangeCustomerChoice() {
    cout << "Clients Name Service Selected: "<< endl;
    
    string i;
    string one = "1 = Brokerage";
    string two = "2 = Retirement";
    
    cin >> i;
    
    if (i == one) {
        cout << one;
    }
    if (i == two) {
        cout << two;
    }
    
    cout << "Selected Option" << endl;
    
    cout << "Enter the number of the client that you wish to change" << endl;
    cin >> client;
    
    cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
    cin >> i;
}


int main() {
    
    cout << "Created by: Janera Dobson" << endl;
    
    cout << "Hello! Welcome to our Investment Company" << endl;
    
    CheckUserPermissionAccess();
    
    DisplayInfo();
    
    ChangeCustomerChoice();
    
}
/*
#include <iostream>
#include <iomanip>
using namespace std;
const int NUM_STRINGS = 7; // Global named constant: size of testString array
const int MIN_LENGTH = 8; // Global named constant: Min length of password
const int MAX_LENGTH = 10; // Global named constant: Max length of password
bool isValidPassword(string pwd, char spec[], int siz);
int main()
{
   string testString[NUM_STRINGS] = {"12A4&z78", "12A4&z78(", "12A45z78","12A4$Z78", "a124$z78", "12A4&z7", "12A4&z7890T" };
   char special[] = {'#', '$', '%', '&', '!', '?', '@'};
   int numSpecial = sizeof(special)/sizeof(char); // Calculate the size of special array
   // Driver for isValidPassword()
   for (int i = 0; i < NUM_STRINGS; i ++)
       cout << setw(14) << testString[i] << (isValidPassword(testString[i], special, numSpecial)? " is valid": " is not valid") << endl;
   return 0;
}
bool isValidPassword(string pwd, char spec[], int siz)
{
   bool hasDigit = false;
   bool hasLower = false;
   bool hasUpper = false;
   bool hasSpecial = false;
   bool hasIllegal = false;
   for(int i = 0; i < pwd.length(); i++)
   {
       if(isdigit(pwd.at(i)))
           hasDigit = true;
   }
   for(int i = 0; i < pwd.length(); i++)
   {
       if(islower(pwd.at(i)))
           hasLower = true;
   }
   for(int i = 0; i < pwd.length(); i++)
   {
       if(isupper(pwd.at(i)))
           hasUpper = true;
   }
   for(int i = 0; i < pwd.length(); i++)
   {
       for(int x = 0; x < siz; x++)
           if(pwd.at(i) == spec[x])
               hasSpecial = true;
   }
   for(int i = 0; i < pwd.length(); i++)
   {
       if(!isdigit(pwd.at(i)))
       {
           if(!islower(pwd.at(i)))
           {
               if(!isupper(pwd.at(i)))
               {
                   if(pwd.at(i) != '#' && pwd.at(i) != '$' && pwd.at(i) != '%' && pwd.at(i) != '&' && pwd.at(i) != '!' && pwd.at(i) != '?' && pwd.at(i) != '@' )
                   {
                       hasIllegal = true;
                   }
               }
           }
       }
   }
   if (pwd.length() < MIN_LENGTH || pwd.length() > MAX_LENGTH)
   {
       return false;
   }
   else if (hasDigit == true && hasLower == true && hasUpper == true && hasSpecial == true && hasIllegal == false)
       return true;
}
*/
