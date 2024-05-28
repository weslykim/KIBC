#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;
int main(void)
{
    vector<int> vec = {3, 2, 5, 1, 7, 6};
    int max = max_element(vec.begin(), vec.end());
    int min = min_element(vec.begin(), vec.end());

    cout << "max : " << max << endl;
    cout << "min : " << min << endl;

    sort(vec.begin(), vec.end());
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    sort(vec.begin(), vec.end(), greator<int>());
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}