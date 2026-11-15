#include <iostream>
using namespace std;


int main()
{
    int age;


    cout << "Enter Your Age: " << endl;
    cin >> age;


    if (age >= 18)
    {
        cout << "your age adult" << endl;
    }
    else
    {
        cout << "your age minor" << endl;
    }


    return 0;
}
