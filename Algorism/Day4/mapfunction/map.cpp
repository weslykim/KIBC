#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main(void)
{
    map<string,int>  mymap = {{"a", 1}, {"b", 2}};

    cout << "[\"a\"] : " << mymap["a"] << endl;
    cout << ".at[\"b\"] : " << mymap.at("b") << endl;

    cout << ".empty(): " << mymap.empty() << endl;
    cout << ".size(): " << mymap.size() << endl;
}