#include <iostream>
using namespace std;

int main(void)
{
string content;
string pracLine;

cout << "Enter text: " << endl;
    do
    {
        getline(cin, pracLine);
        content += pracLine +'\n';

    } while (!pracLine.empty());
    cout << "New Line : " << content << endl;

    return 0;
}