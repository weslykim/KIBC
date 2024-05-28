#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main(void)
{
    vector <string> strVec = {"one", "two", "three", "4", "5"};
    vector <string> ::iterator strIt = strVec.begin();
    // cout << *(strIt + 1) << endl;

    for (strIt; strIt != strVec.end(); strIt++)
    {
        cout << *strIt << endl;
    }

}