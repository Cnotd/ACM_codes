#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n , k;
    std :: cin >> n >> k;
    std :: vector<int> arr(n);

    int cnt = 0 ;

    for(int i = 0 ;i < n ;i++)
    {
        std :: cin >> arr[i];
        
    }
    k = std :: min(n , k );

    int last = n - 1;
    for(int i = 0 ;i < k;i++)
    {
        if(arr[last] > n)
        {
            std :: cout << "No\n";
            return ;
        }
        else
        {
            last -= arr[last] ;
            if(last < 0) last += n;
        }

    }
    std :: cout << "Yes" << std :: endl;

return ;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}