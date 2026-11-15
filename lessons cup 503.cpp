#include <iostream>
#include <string>
using namespace std;


int main()
{
    string password;
    string username;


    cout << "Enter your password: " << endl;
    cin >> password;


    cout << "Enter your uesername: " << endl;
    cin >> username;


    if (password == "Secure2026" && username == "admin")
    {
        cout << "Access Granted" << endl;
    }
    else
    {
        cout << "Access Denied" << endl;
    }


    return 0;
}
