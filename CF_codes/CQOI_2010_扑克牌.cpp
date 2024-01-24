#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

#define vec std :: vector


const int N = 1e6 + 7;

int n , m;
vec<i64> arr(N);


bool check(i64 x)
{

    i64 df = 0;
    for(int i = 0 ;i < n;i ++)
    {
        df += abs(x - arr[i]);
    }

   // std :: cout << df << ">" << m << std :: endl;
    if(df > m || df > x)
    {
        return true ;
    }
    else return false ;

}



void solve() 
{
    
    std :: cin >> n >> m ;
    

    for(int i = 0;i <n ;i ++ )std :: cin >> arr[i] ;

    i64 l = 1 , r  = 1e9 + 7;

    while(l < r)
    {
        i64 mid = (l + r + 1) >> 1 ;
        if(check(mid))
        {
            r = mid - 1;
        } 
        else
        {
            l = mid ;
        }
    }

    std :: cout << l << std :: endl;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}