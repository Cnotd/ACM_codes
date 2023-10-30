#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int a , b , c ; 
    std :: cin >> a >> b >> c ;
    if(a == b && b == c)
    {
        std :: cout << "YES" << std :: endl;
        return ;
    }

    int cnt = 0;

    int min = std :: min({a,b,c});
    int max = std :: max({a,b,c});
    int mm = a + b + c - min - max ;
    if(mm % min != 0)
    {
        std :: cout << "NO" << std :: endl;
        return ;
    }
    cnt += (mm/min - 1);
    if(max % min != 0)
    {
        std :: cout << "NO" << std :: endl;
        return ;
    }
    cnt += (max / min - 1);
    std :: cout << (cnt <= 3 ? "YES" : "NO") << std :: endl;

    return ;

}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}