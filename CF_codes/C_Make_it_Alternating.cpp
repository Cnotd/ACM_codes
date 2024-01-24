#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
#define mod 998244353
using i64 = long long;

void solve() 
{
    std :: string s ;
    std :: cin >> s;
    i64 ans = 1;
    int n = s.length();
    i64 len = 0 ; 
    int tmp = -1 ;
    int node = 0 ;
    for(int i = 0 ;i < n -1;i++)
    {
        if(!(s[i]^s[i+1]))continue;
       // std :: cout << i << ' ' << tmp << std :: endl;
        len = i  - tmp;
       // std :: cout << len << ' ' << std :: endl;
        tmp = i;
        if(len)ans = ans * len % mod ;

        node ++ ;
    }
    // if(!tmp)len = n - tmp;
    // else
     len = n - 1 - tmp;
   // std :: cout << len << std :: endl;
    ans = ans * len % mod ;
    node ++ ;
// std :: cout << node << std :: endl;

   for(int i =1 ;i <= (n-node);i++)
   {
    ans *= i;
    ans %= mod;
   }
    
  std :: cout << n - node <<' ' << ans << std :: endl;

 return ;

}

int main() 
{
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}