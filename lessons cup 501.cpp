#include <iostream>
#include <string>
using namespace std;


int main()
{
    int age;
    int score;


    cout << "Enter your age: " << endl;
    cin >> age;


    cout << "Enter your score: " << endl;
    cin >> score;


    if (age >= 18 && score >= 50)
    {
        cout << "Accepted" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }


    return 0;

}
