#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
 
 
std :: map<i64, i64> map ;
void solve() 
{
    int n  = 0 ;
    std :: cin >> n ;
 
     i64 ans = 0 ; 
    
    for(int i = 0 ;i < n ;i++)
    {
        i64 tmp ;
        std :: cin >> tmp ;
        if(tmp == 1) ans += map[2];
        if(tmp == 2) ans += map[1] ;
        map[tmp] ++ ;
    }
 
   
    for(auto A : map)
    {
        ans += A.second * (A.second -1 ) / 2;
    }
 
    //ans += map[1] * map[2] ;
 
 
 
    std :: cout << ans << std :: endl;
 
    map.clear();
 
    return ;
    
}
 
int main() {
    IOS
 
    int _t =  1;
    std :: cin >> _t;
 
    while (_t--)
        solve();
}