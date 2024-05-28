#include <iostream>
using namespace std;

int main(void)
{
    string eraseStr = "An example sentence";
    eraseStr.erase(2, 8);
    eraseStr.erase(1);
    cout << "eraseStr: " << eraseStr << endl;
    cout << "eraseStr: " << eraseStr << endl;

    string popStr = "boxes";
    popStr.pop_back();  // 길이상관없이 역순으로 순차적으로 쓴 횟수만큼 지워진다.
    cout << "popStr: " << popStr << endl;
}