#include <iostream>
using namespace std;

int main(void)
{
    string addStr = "abc";
    addStr += "123";
    cout << "addStr : " << addStr << endl;

    string appendStr = "qwe";
    appendStr.append("456");
    cout << "appendStr : " << appendStr << endl;

    string insStr = "it is true";
    insStr.insert(6, "not ");
    cout << "innStr : " << insStr << endl;
    return 0;
}