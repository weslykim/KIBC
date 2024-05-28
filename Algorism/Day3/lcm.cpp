#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int get_gcd_euc(int a, int b)
{
    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    if (a == b)
    {
        return 1;
    }

    if (a > b)
    {
        return get_gcd_euc(a - b, b);
    }
    else if (a < b)
    {
        return get_gcd_euc(b - a, a);
    }
    else
    {
        return a;
    }
}
int main(void)
{
    int num1, num2, gcd;
    int lcm = num1 * num2 / gcd;

}