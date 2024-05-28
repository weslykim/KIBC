#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;
int main(void)
{
    queue<int> iQueue;

    iQueue.push(1);
    iQueue.push(4);
    iQueue.push(8);

    iQueue.pop();
    cout << "iQueue.front(): " << iQueue.front() << endl;
    cout << "iQueue.back(): " << iQueue.back() << endl;

    cout << "iQueue.empty(): " << iQueue.empty() << endl;
    cout << "iQueue.size(): " << iQueue.size() << endl;

    return 0;
}