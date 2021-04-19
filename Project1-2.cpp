//============================================================================
// Name        : Project1.cpp
// Author      : Janera Dobson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

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



