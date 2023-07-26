// Q: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1045
// Extended Euclidean Algorithm 
#include<bits/stdc++.h>
using namespace std;
int egcd(int a, int b, int &x, int &y)
{
    if(b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int x1, y1;
    int d = egcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return d;
}
int main()
{
    int a, b;
    while(cin >> a >> b)
    {   
        int x, y, x1, y1;
        int ans = egcd(a, b, x, y);
        cout << x << " " << y << " " << ans << endl;
    }
    return 0;
}