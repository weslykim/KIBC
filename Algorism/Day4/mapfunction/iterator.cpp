#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main(void)
{
    mymap["b"] = 10;
    mymap["new"] += 5;

    map<string,int> mymap = {{"a", 1}, {"b", 2}};
    map<string,int>iterator it = mymap.begin();

    for (it; it != mymap.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}