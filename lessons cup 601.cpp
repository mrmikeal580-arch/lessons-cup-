#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number;


    cout << "Enter Your Number: " << endl;
    cin >> number;


    if (number >= 0)
    {
        cout << "NonZero" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }


    return 0;
}
