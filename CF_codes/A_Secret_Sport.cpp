#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ;
    int a = 0 , b = 0;
    std :: cin >> n ;
    std :: string s ;
    std ::cin >> s;
    for(auto A : s)
    {
        if(A == 'A')a ++;
        else b ++ ;
    }
    // if(a >= b)
    // {
    //     std :: cout << 'A' << std :: endl;
    // }
    // else 
    // std ::cout << 'B' << std :: endl;
    std :: cout << *(s.end()-1) << std ::endl;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}