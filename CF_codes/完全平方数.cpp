#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
   INT_FAST64_MAX l , r ;
   std :: cin >> l >> r ;

   int a = 1 , b = 1e5 ; 
   while(a < b)
   {
    int mid = a + b >> 1 ;
        if(mid * mid < l)
        {
            a = mid + 1;
        }
        else 
        {
            b = mid ;
        }
   }
   int ll = a ;

    int a = 1 , b = 1e5;
    while(a < b)
    {
        int mid = (a + b + 1) >> 1;
        if(mid * mid > r)
        {
            b = mid -1 ;
        }
        else
        {
            a = mid ;
        }
    }
    int rr = a ;
    std :: cout << rr - ll  << std :: endl;



return ;
    
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}