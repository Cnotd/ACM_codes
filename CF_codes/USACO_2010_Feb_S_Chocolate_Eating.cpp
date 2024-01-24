#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7;


i64 n , d , k = 0;
int arr[N] ;
int day[N] ;


bool check(i64 mid)
{

    i64 s = 0 ;
    int i = 1 ;
    int t = 0 ;
    while(i <= d)
    {
        while(s < mid)
        {
            s += arr[t++];
            if(t > n)return true ;
            //day[t] = i;
            if(k == mid)day[t] = i ;
        }
        s /= 2;
        i ++ ;
    }
    if(k == mid)
    {
        while(t <= n)
        {
            day[++t] = d;
        }
    }
    
    return false ;
}

void solve()
{

    std :: cin >> n >> d ;

    for(int i = 0; i < n ; i ++ ) std :: cin >> arr[i];

  //  for(int i = 1;i < n; i++)arr[i] = arr[i - 1] + arr[i];
    

    i64 l = 1 , r =  (i64)pow(2,60);

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
    k = l;
    check(k);
    
    for(int i = 1 ;i <= n; i++)std :: cout << day[i] << std :: endl;

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