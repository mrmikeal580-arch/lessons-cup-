#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number1;
    int number2;


    cout << "Enter Your First Number: " << endl;
    cin >> number1;


    cout << "Enter Your Two Number: " << endl;
    cin >> number2;


    if (number1 > number2)
    {
        cout << "First" << endl;
    }
    else if (number1 < number2)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "EQUAL" << endl;
    }


    return 0;

}
