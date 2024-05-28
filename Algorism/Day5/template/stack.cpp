#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
template <class T>
T add(T a, T b)
{
    T res = a + b;
    cout << "added by template func" << endl;
    return res;
}
vector<int>myStack = {1, 2, 3, 4};
int main(void)
{
    int poppedVal = pop(myStack);
    cout << poppedVal << endl;

    cout << "myStack: ";
    for (auto &i : myStack)
    {
        cout << i << ", ";
    }
    cout << "\n";
    return 0;
}