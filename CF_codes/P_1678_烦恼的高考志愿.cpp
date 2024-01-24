#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

bool check(std :: vector<int> & a , int q,int m)
{
    if(a[m] <= q)return true ;
    else return false ;

}


void solve() 
{
    int n , m ;
    std :: cin >> n >> m ;
    std :: vector<int> arr(n);
    for(int i = 0;i < n;i++)std :: cin >> arr[i];
    std :: sort(arr.begin(),arr.end());
    
    i64 ans = 0 ;
    while(m--)
    {
        int q = 0 ;
        std :: cin >> q;
        int l = 0 , r = n - 1;
        while(l < r)
        {
            int mid = (l + r) >> 1;
            if(check(arr,q,mid))
                l = mid + 1 ;
                else
                r = mid  ;
        }
        if(l == 0)
        {
            ans += abs(arr[0] - q);
        }
        else
        {
            ans += std :: min(abs(arr[l]-q),abs(arr[l-1]-q));
        }
    }
    std :: cout << ans << std ::endl;
}

int main()
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}