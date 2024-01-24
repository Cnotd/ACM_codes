#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

bool check(std :: vector<i64> &arr,i64 sum,i64 m) 
{
    int cnt = 1 , tmp = sum ;
    for(int i = 0 ; i < arr.size();i++)
   {   
        if(sum >= arr[i])
        {
            sum -= arr[i];
        }
        else
        {
            sum = tmp - arr[i];
            cnt ++ ;
        }
   }
 return  cnt <= m ;
}

void solve() {
    i64 n , m ;
    std :: cin >> n >> m;
    std :: vector<i64> arr(n);

    for(int i = 0 ; i < n;i++)std :: cin >> arr[i];

    i64 max = 0 ;
    for(int i = 0 ; i< n ;i ++) max = std :: max(max,arr[i]);

    i64 S = 0;
    for(int i = 0;i < n; i ++ )S += arr[i];

    int l = max , r = S;
    while(l < r)
    {
        int mid = (l + r) >> 1 ;
    if(check(arr,mid,m))r = mid ;
    else l = mid + 1;

    }
    std :: cout << l << std :: endl;
    return ;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}