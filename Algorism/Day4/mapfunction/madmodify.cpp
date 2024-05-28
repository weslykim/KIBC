#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<string,int>  mymap = {{"a", 1}, {"b", 2}};
    mymap["new1"] = 3;
    mymap.insert({"new2", 4});

    cout << "[\"new1\"] : " << mymap["new1"] << endl;
    cout << "[\"new2\"] : " << mymap["new2"] << endl;

    mymap.erase("new1");

    mymap["b"] = 10;
    mymap["new"] += 5;
}