#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number;


    cout << "Enter your number: " << endl;
    cin >> number;


    if (number == 5 || number == 10 || number == 20)
    {
        cout << "Special Number" << endl;
    }
    else
    {
        cout << "Normal Number" << endl;
    }


    return 0;
}
