#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> remVec = {1, 2, 3, 4, 5, 6, 7, 8};
    remVec.pop_back();
    for (int i = 0; i < remVec.size(); i++)
    {
        cout << remVec[i] << ", ";
    }
    cout << "\n";

    remVec.erase(remVec.begin()+1);
    for (int i = 0; i < remVec.size(); i++)
    {
        cout << remVec[i] << ", ";
    }
    cout << "\n";

    remVec.erase(remVec.begin()+1, remVec.begin()+2);
    for (int i = 0; i < remVec.size(); i++)
    {
        cout << remVec[i] << ", ";
    }
    cout << "\n";
    return 0;
}