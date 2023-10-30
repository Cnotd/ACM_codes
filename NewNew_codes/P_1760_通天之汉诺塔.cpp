#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

i64 cnt = 0 ;

void deal(int n,char sta,char end,char tool)
{
    if(n == 0)return ;
    deal(n-1,sta,tool,end);
    cnt++ ;
    std :: cout << cnt << ' ' <<sta << "->" << end << std :: endl;
    deal(n-1,tool,end,sta); // 把除当前最低层的盘移到工具柱 ；
}

void solve() 
{
    int n = 0 ; 
    std :: cin >> n ; 

    deal(n,'A','C','B');

    // i64 ans = (i64)pow(2,n) - 1;
    // std :: cout << ans << std :: endl ;

    return ; 
}

int main() 
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}