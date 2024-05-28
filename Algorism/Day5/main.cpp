#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;
int add(int a, int b)
{
    int res = a + b;
    return res;
}
string add(string a, string b)
{
    string res = a + b;
    return res;
}

template <class T>
T add(T a, T b)
{
    T res = a + b;
    cout << "added by template func" << endl;
    return res;
}
int main(void)
{
    int num1, num2, num3;
    num1 = 3;
    num2 = 5;
    num3 = add(num1, num2);

    cout << "num3 : " << num3 << endl;

    string str1, str2, str3;
    str1 = "ab";
    str2 = "cd";
    str3 = add<string>(str1, str2);

    cout << "str3 : " << str3 << endl;


    
}