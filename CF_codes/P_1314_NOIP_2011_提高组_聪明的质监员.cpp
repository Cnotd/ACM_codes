#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
using vec = std :: vector<i64>;

i64 n , m , s;
i64 sum ;



bool ck(i64 w,vec & ar,vec & br,vec & ll , vec & rr)
{
    std :: cout << 1 << std :: endl;
    i64 Y = 0 ;
    const int N = 2e6 + 7 ;
    int tmp[N] ;

    for(int i = 1 ; i <= n;i++)
    {
        if(ar[i] >=  w)
        {
            tmp[i] += tmp[i-1] + 1;
            br[i] += br[i-1];
        }
        else
        {
            br[i] = br[i-1];
            ar[i] = ar[i-1];
        }
    }

    for(int i = 1;i <= m;i++)Y += (tmp[rr[i]] - tmp[ll[i]-1]) * (br[rr[i]] - br[ll[i]-1]);

    std :: cout << Y << std :: endl;
    
    sum = (i64)abs(s - Y); 
    if(s - Y <= 0)  return true;
    else return false;
  
}




void solve() 
{
    
    std :: cin >> n >> m >> s;

std :: vector<i64> arr( n + 2);
std :: vector<i64> brr( n + 2);
std :: vector<i64> l(n + 2),r(n + 2);

    for(int i = 0 ; i < n ; i++ )
    {
        std :: cin >> n >> m >> s;
    }

    for(int i = 1 ;i <= n ;i ++)std ::cin >>arr[i] >> brr[i];
    for(int i = 1 ;i <= m ;i ++)std :: cin >> l[i] >> r[i];

   i64 ll = -1 , rr = 1e9 + 7;
    
    i64 ans = 0x3f;
    while(ll <= rr)
    {
      //  std :: cout << 1 << std :: endl;
        
        i64 mid = (ll + rr) >> 1;
        std ::cout << mid << std :: endl;
        if(ck(mid,arr,brr,l,r)) rr = mid - 1;
        else ll = mid + 1 ;
        
        std :: cout << ll << ' ' << rr << std :: endl; 
      
        ans = std :: min(ans,sum);
    }

  std :: cout << ans << std :: endl;

}

int main() 
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();

        return 0;
}