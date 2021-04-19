//
//  main.cpp
//  FinalProject.cpp
//
//  Created by Janera Dobson on 2/19/21.
//

/*
 #include <iostream>
 #include <string>
 using namespace std;

 string username = "";
 string password = "";
 string client = "";

 void DisplayInfo() {
     cout << "What would you like to do?" << endl; // needed another line for readability
     
     cout << "--------------- MENU ---------------" << endl;
     cout << "  DISPLAY the client list (enter 1)" << endl;
     cout << "  CHANGE a clients choice (enter 2)" << endl;
     cout << "  Exit program.. (enter 3)" << endl;
     cout << "------------------------------------" << endl; //needed a few more lines for readability
     
 }

//Function had serious security vulnerabilities
//Anyone could have eventually hacked my system becuase password was very easy and not authenticated correctly
//Therefore, I had to prompt the user twice to be sure they met the password requirements, check credentials with if statement and if not to re-enter until correct
// Also, I used delete[] to allocate space to memory
 
 void CheckUserPermissionAccess() {
     cout << "Enter your username: " << endl;
     cin >> username;
     
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

// main method needed the proper command line arguments to start program
// a while loop and switch statement that allowed the user to navigate through the menu and exit program appropriately
 int main() {
     
     cout << "Created by: Janera Dobson" << endl;
     
     cout << "Hello! Welcome to our Investment Company" << endl;
     
     CheckUserPermissionAccess();
     
     DisplayInfo();
     
     ChangeCustomerChoice();
 }
 
 // Lastly, a bool test to check each input and ensure that the password
 contains a uppercase, lowercase, and digit
 */



#include <iostream>
#include <string>
#include <cstring> // for std::strlen
#include <cctype>
using namespace std;

string username = "";
string password;
string client = "";
int choice;

//fuction proto to check pass
bool testPass(char []); // don't need the 2nd parameter

void DisplayInfo() {
    cout << "What would you like to do?" << endl << endl;
    
    cout << "-------------- MENU OPTIONS --------------" << endl;
    cout << "DISPLAY the client list (enter 1)" << endl;
    cout << "CHANGE a clients choice (enter 2)" << endl;
    cout << "Exit program.. (enter 3)" << endl;
    cout << "------------------------------------------" << endl << endl << endl;
}

void CheckUserPermissionAccess() {
    
    char *password; //dynamically allocating an array
    int length; //assure requested length and pass length are the same
    int numCharacters; //hold number of characters for password
    
    cout << "Enter your username: " << endl;
    cin >> username;
    
    //get the password length from the user
    cout << "Your password must be at least 6 characters long." << endl;
    cout << "Please enter how many characters you would like your password to be: " << endl;
    cin >> numCharacters;
    
    //validate
    while (numCharacters < 6)
    {
        cout << "Please enter a password length of at least 6 characters." << endl;
        cin >> numCharacters;
    }
    
    //dynamically allocate the array for the password
    password = new char[numCharacters+1]; /// every cstring must end with a '\0' else -> crash
    
    
    cout << "Please enter a password that contains at least one uppercase letter, " << endl;
    cout << "one\nlowercase letter, and at least one digit." << endl;
    
    //get users password
    cin >> password;
    
    //convert pointer/array length to interger
    length = strlen(password);
    
    //check pointer/array length against user requested pointer/array size
    //to ensure consistent data
    while (length != numCharacters)
    {
        cout << "Your password is not the size you requested. ";
        cout << "Please re-enter your password." << endl;
        cin >> password;
        length = strlen(password);
    }
    
    // checks password credentials
    if (testPass(password))
        cout << "Your password is valid." << endl;
    else
    {
        cout << "Your password is not valid." << endl;
        cout << "Please refer to the above warning message." << endl;
    }
    
    delete[] password ; // hey!! don't forget to free your allocated memory!!!
}

void ChangeCustomerChoice() {
    cout << "Enter client's name: " << endl;
    
    string j;
    string one = "1 = Brokerage";
    string two = "2 = Retirement";
    
    cin >> j;
    
    if (j == one) {
        cout << one;
    }
    if (j == two) {
        cout << two;
    }
    
    cout << "Selected Option" << endl;
    
    cout << "Enter name of the client that you wish to change" << endl;
    cin >> client;
    
    cout << "Client selected";
    
    cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
    cin >> j;
    cout << "Client's service has been changed! Goodbye..." << endl;
}


int main(int argc, char** argv) {
    
    cout << "Created by: Janera Dobson" << endl << endl;
    
    cout << "Hello, Welcome to our Investment Company!" << endl << endl;
    
    CheckUserPermissionAccess();
    
    DisplayInfo();
    
    const int displayClient = 1,
    changeClientChoice = 2,
    exitProgram = 3;
    
    while (choice < displayClient || choice > exitProgram) {
        cout << "Please enter a valid menu choice: ";
        cin >> choice;
    }
    
    
    if (choice != exitProgram) {
        switch (choice) {
            case displayClient:
                cout << "Jay Dobson, Eko Dobson, Nate Smith, Justice Braxton, Dre Figueroa";
                break;
            case changeClientChoice:
                ChangeCustomerChoice();
            case exitProgram:
                cout << "Program terminated" << endl;
            default:
                break;
        }
    } while (choice != exitProgram);
    return 0;
}

/*This function will check each input and ensure that the password
 contains a uppercase, lowercase, and digit.*/

bool testPass(char pass[])
{
    // flags
    bool aUpper = false,
    aLower = false,
    aDigit = false ;
    for ( int i = 0 ; pass[i] ; ++i )
    if ( isupper(pass[i]) )
        aUpper = true ;
    else if ( islower(pass[i]) )
        aLower = true ;
    else if ( isdigit(pass[i]) )
        aDigit = true ;
    if ( aUpper && aLower && aDigit )
        return true;
    else
        return false ;
}
