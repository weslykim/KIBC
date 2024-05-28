#include <iostream>
#include <vector>
using namespace std;

vector<int> vec = {1,2,3};
cout << "vec.size() : " << vec.size() << endl;

if (vec.empty())
{
    cout << "vec is empty" << endl;
}
else
{
    cout << "vec is not empty" << endl;
}