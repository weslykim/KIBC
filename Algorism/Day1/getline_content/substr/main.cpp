#include <iostream>
using namespace std;

int main(void)
{
    string str("abcdefg");
    string str2 = str.substr(2, 4);
    cout << "str2 : " << str2 << endl;
}