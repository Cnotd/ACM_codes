#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() {
    int x , y , k ;
    std :: cin >> x >> y >> k ;
    if(y < x)
    {
        std :: cout << x << std :: endl;
        return ; 
    }
    else
    {
        int h = y - x;
        if(h <= k )
        {
            std :: cout << y << std :: endl;
            return ;
        }
        else
        {
            int t = y -(x + k);
            std :: cout << x + k + 2 * t << std :: endl;
            return ;
        }
    }

    return ;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}