#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<string> addVec = {"ab", "cd"};
    addVec.push_back("ef");
    addVec.insert(addVec.begin() + 2, "z");

    for (size_t i = 0; i < addVec.size(); i++)
        {
            cout << addVec[i] << ", ";
        }
    cout << "\n";

    return 0;
}