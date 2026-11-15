#include <iostream>
#include <string>
using namespace std;


int main()
{
    string password;


    cout << "Enter your password: " << endl;
    cin >> password;


    if (password == "secure2026")
    {
        cout << "Welcome to secureVault" << endl;
    }
    else
    {
        cout << "Wrong password" << endl;
    }


    return 0;
}
