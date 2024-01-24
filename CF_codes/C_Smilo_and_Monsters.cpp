#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ;
    std :: cin >> n;
    std :: vector<i64> arr(n);
    for(int i = 0;i < n;i++)
    {
        std :: cin >> arr[i];
    }
    std :: sort(arr.rbegin(),arr.rend());

    i64 sum = accumulate(arr.begin(),arr.end(),INT64_C(0));
    
    std :: vector<i64> pre(n+2,0);

    for(int i = 0 ;i  < n; i++)
    {
        pre[i+1] = pre[i] + arr[i];
    }

    int need = 0;
    while(pre[need] < sum/2)need++;
    
    std :: cout << (sum + 1) / 2 + need << std :: endl;

    return ;

   
}

int main() 
{
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}