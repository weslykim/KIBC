#include <iostream>
using namespace std;

int main(void)
{
    string str = "abcDEF";
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);       // 소문자를 대문자로
        // str[i] = tolower(str[i]);    // 대문자를 소문자로
        cout << str[i] << endl;
    }
    return 0;
}