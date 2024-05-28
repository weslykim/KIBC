#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
// #include <stack>
using namespace std;

template <class T>
T add(T a, T b)
{
    T res = a + b;
    cout << "added by template func" << endl;
    return res;
}
void printClear(T& data)
{
    for (size_t i = 0; i < data.size(); i++)
    {
        cout << data[i] << ", ";
    }
    cout << "\n";
    data.clear();
    if (data.empty())
    {
        cout << "cleared!" << endl;

    }
    else{
        cout << "clearing failed!" << endl;
    }
    return ;
}
int main(void)
{
    string sClearMe = "abc";
    vector<int> vClearMe = {1, 2, 3};

    printClear<string>(sClearMe);
    printClear(vClearMe);

}