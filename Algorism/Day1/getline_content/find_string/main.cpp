#include <iostream>
using namespace std;

int main(void)
{

    string findStr ("There are two needles in this haystack with needles.");
    string findStr2("needle");
    size_t found = findStr.find(findStr2);

    if (found != string::npos)
    {
        cout << "first 'needle' found at : " << found << '\n';
    }
    found = findStr.find(findStr2, found + findStr2.size());
    cout << "second 'needle' found at : " << found << '\n';
    return 0;
}