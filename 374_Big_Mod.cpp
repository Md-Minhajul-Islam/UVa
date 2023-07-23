// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=727&page=show_problem&problem=310
#include<bits/stdc++.h>
using namespace std;
int bigMod(int b, int p, int m)
{
    if(p == 0) return 1;
    int x = bigMod(b, p/2, m);
    x = ((x%m)*(x%m))%m;
    if(p % 2 == 1) x = ((x%m)*(b%m))%m;
    return x;
}
int main()
{
    int base, power, mod;
    while(cin >> base >> power >> mod)
    {
        cout << bigMod(base, power, mod) << endl;
    }
    return 0;
}