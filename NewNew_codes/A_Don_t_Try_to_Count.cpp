#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n , m ;
    std :: cin >> n >> m;
    std :: string a , b ;
    std :: cin >> a >> b ;
    int cnt = 1 ;
    while( cnt < 10)
    {
        if(a.find(b) != a.npos)
        {
            std :: cout << 0 << std :: endl;
            return ;
        }
      a += a;
      n *= 2;  
     // std :: cout << n << ' ';
     // if(n < m)continue; 
      if(a.find(b) == a.npos)
      {
        cnt ++ ;
        continue;
      }
      else
      {
        std :: cout << cnt << std :: endl;
        return ;
      }
    }
    std :: cout << -1 << std :: endl;

return ;

}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}