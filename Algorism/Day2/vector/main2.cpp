#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector <string> strVec = {"one", "two", "three", "4", "5"};
    cout << "first ele: " << strVec[0] << endl;
    cout << "val at 1: " << strVec.at(1) << endl;
    cout << "front :  " << strVec.front() << endl;
    cout << "back : " << strVec.back() << endl;

    return 0;
}