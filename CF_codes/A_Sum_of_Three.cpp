#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n ; 
    std ::cin >> n ; 
    
    if(n <= 9)
    {
        if(n == 7)
        {
            std :: cout << "YES\n";
            std :: cout << 1 << ' ' << 2 << ' '<< 4 << std :: endl;
            return ;
        }
        if(n == 8)
        {
            std :: cout << "YES\n";
            std :: cout << 1 << ' ' << 2 << ' '<< 5 << std :: endl;
            return ;
        }
        std :: cout << "NO\n";
        return ;

    }
    std :: cout << "YES\n";
    int mt = n % 3 ;
    if(n % 3)
    {
        std :: cout << 1 << ' '<< 2 << ' '<< n - 3 << std :: endl;
    }
    else
    {
        std :: cout << 1 << ' '<< 4 << ' ' << n - 5 << std :: endl;
    }


    
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}