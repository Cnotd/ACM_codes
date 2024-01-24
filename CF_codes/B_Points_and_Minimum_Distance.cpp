#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ;
    std :: cin >> n ;
    std :: vector<int> arr(2 * n);
    for(int i = 0 ;i < 2 * n ;i++)std :: cin >> arr[i];
    
    std :: sort(arr.begin(),arr.end());

    std :: vector<int> x(n);
    std :: vector<int> y(n);

    int xx , xxx , yy , yyy ;
    for(int i = 0;i < 2 *n ;i ++)
    {
        if(i < n)
        {
            x[i] = arr[i];
        }
        else
        {
            y[i - n] = arr[i];
        }
    }
    i64 sum = arr[n-1] + arr[2*n-1] - arr[0] - arr[n];
    std :: cout << sum << std :: endl;
    for(int i =0 ;i < n;i++)
    {
        std :: cout << x[i] << ' '<< y[i] << std ::endl;
    }

    return ;
    
}

int main() {
    IOS

    int _t =  1;
   std :: cin >> _t;

    while (_t--)
        solve();
}