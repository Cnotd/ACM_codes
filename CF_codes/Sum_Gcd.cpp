#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
unsigned  long long  mod = (i64)pow(2,63) + (i64)pow(2,63) ;

int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

void solve() 
{
  //  std :: cout << mod << std :: endl;
   // std :: cout << (1 << 64) << std :: endl;
    int  n  , k ; 
    std ::cin >> n >> k ;
    std :: vector<int> arr(n);
    for(int i = 0 ;i < n; i++)std :: cin >> arr[i];

    std :: vector<int> gd;
    for(int i = 0 ;i < n; i++)
    {
        gd.push_back(gcd(arr[i],k));
    }
    
    i64 ans = 0;
    for(int i = 0;i < n;i++)
    {
        //std :: cout << gd[i] << ' ';
        ans += gd[i];
        ans %= mod ;
    }
std :: cout << ans * n %mod << std :: endl;

//std :: cout << ans << std :: endl;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}