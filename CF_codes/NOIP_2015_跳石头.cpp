#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


bool check(i64 mid , i64 & m , std :: vector<i64> & sum , int n)
{
    
    int s =0 ; int t = 0 ;
    for(int i = 1 ;i <= n + 1;i ++)
    {
        if(sum[i] - s < mid)t ++ ;
        else
        {
            s = sum[i] ;
        }
    }
   // t大 ， 枚举答案偏大 ， 要使得变小 ；
   if(t > m)return false ;
   return true ;

}

void solve() 
{
    i64 a ,  n , m ;
    std :: cin >> a >> n >> m;

    std :: vector<i64> dis(n + 2,0);

    dis[n + 1] = a ;
    for(int i = 1 ;i <= n ;i ++)std :: cin >> dis[i];

   // for(int i = 1 ;i <= n; i++)dis[i] = dis[i] - dis[i-1];

    i64 l = 0 , r = a;
    while(l < r)
    {

        i64 mid = (l + r + 1) >> 1;
        if(check(mid , m , dis,n + 1))
        {
            l = mid ;
        }
        else
        {
            r = mid - 1;
        }
    }

    std :: cout << l << std :: endl;

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