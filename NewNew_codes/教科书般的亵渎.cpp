#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve()
{
    int n = 0 ; 
    std :: cin >> n ;
    std :: vector<int> arr(n);
    for(int i = 0 ;i < n ;i ++)std :: cin >> arr[i];

    bool flg = 0 ;
    sort(arr.begin(),arr.end());
    for(int i = 0 ;i < n - 1;i++)
    {
        if(arr[i + 1] - arr[i] == 0 || arr[i + 1] - arr[i] == 1)
        {
            continue ;
        }
        flg = 1 ;
        break;
    }
if(!flg)
{
    std :: cout << "YES"<< std :: endl;
}
else
    std :: cout << "NO" << std :: endl;

    return ;
    
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}