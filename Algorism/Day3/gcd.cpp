#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int  get_gcd(int a, int b)
{
    int res = min(a,b);
    while (res != 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        else{
            --res;
        }
    }
    
}

int main(void)
{
    string a, b;
    int num1, num2;
    while (true)
    {
        cout << "enter num1: ";
        getline(cin, a);
        cout << "enter num2: ";
        getline(cin, b);
        try
        {
            num1 = stoi(a);
            num2 = stoi(b);
            break;
        }
        catch(const exception& e)
        {
            cout << "failure due to: " << e.what() << endl;
        }
    }
    int gcd = get_gcd(num1, num2);
    cout << "The greatest common sivisor of " << num1 << " and " << num2 << " is " << gcd << endl;

    
}
