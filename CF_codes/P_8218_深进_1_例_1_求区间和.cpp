#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{

    int n = 0;
    std :: cin >> n ;
    std :: vector<int> arr(n + 2);
    for(int i = 1 ;i <= n ;i ++)
    {
        std :: cin >> arr[i];
    }
    for(int i = 2 ;i <= n ;i ++)arr[i] += arr[i -1];
    int q ;
    std :: cin >> q;
    while(q--)
    {
        int a , b ;
        std :: cin >>a >> b;
        std :: cout << arr[b] - arr[a-1] << std :: endl;
    }

return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}