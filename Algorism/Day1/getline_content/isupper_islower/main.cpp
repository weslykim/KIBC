#include <iostream>
using namespace std;

int main(void)
{
    string str = "abcDEF";
    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i]))
        {
            cout << str[i] << " is in uppercase" << endl;
        }
        else
        {
            cout << str[i] << " is in lowercase" << endl;
        }
    }
}