#include <iostream>
using namespace std;

int main(void)
{
    string comStr1 = "apple";
    string comStr2 = "banana";

    string input;
    cin >> input;

    for (size_t i = 0; i < input.size(); i++)
    {
        input[i] = tolower(input[i]);
    }
    if (input == comStr1)
    {
        cout << "red" << endl;
    }
    else if (input == comStr2)
    {
        cout << "yellow" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }
}