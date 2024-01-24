#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve()
 {
    int n ; 
    std :: cin >> n;
    std :: vector<i64> arr(n );
    for(int i = 0 ;i < n ;i++)
    {
        std :: cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    i64 ans = 1 ;
    for(int i =1 ;i < n -1;i++)
    {
        ans += arr[i];
    }
    
    std :: cout << ans << std :: endl;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}