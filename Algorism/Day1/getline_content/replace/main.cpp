#include <iostream>
using namespace std;

int main(void)
{
    string replaceStr = "this is a test string";
    replaceStr.replace(9, 5, "n example");
    cout << "replaceStr : " <<  replaceStr << endl;
    return 0;
}