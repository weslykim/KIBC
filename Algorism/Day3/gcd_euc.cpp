#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//재귀함수 :  함수가 자기 자신을 호출하는 프로그래밍 기술
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

    return 0;
}