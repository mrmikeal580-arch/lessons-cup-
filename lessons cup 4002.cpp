#include <iostream>
using namespace std;


int main()
{
    int number;


    cout << "Enter your number: " << endl;
    cin >> number;


    if (number > 0)
    {
        cout << "You are an number Positive" << endl;
    }
    else if (number < 0)
    {
        cout << "You are an number Negative" << endl;
    }
    else
    {
        cout << "You are an number Zero" << endl;
    }


    return 0;
}
