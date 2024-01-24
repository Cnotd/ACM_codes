#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ;
    std :: cin >> n;
    std :: priority_queue<int,std :: vector<int>,std :: greater<int>> arr;

    for(int i = 0 ;i < n;i++)
    {
        int t ;
        std :: cin >> t;
        arr.push(t);
    }

    i64 ans = 0 ;
    while(arr.size()!=1)
    {
        auto a = arr.top();
        arr.pop();
        auto b = arr.top();
        arr.pop();
        ans += a + b ;
        arr.push(a + b);
       // arr.push(a + b);
    }

    std :: cout << ans << std :: endl;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}