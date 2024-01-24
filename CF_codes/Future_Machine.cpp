#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

int get_ag(int x , int a , int b)
{
    int sum = x + a + b;
    return sum - std :: max({x,a,b}) - std :: min({x,a,b});
}

void solve() 
{
    int n , m , k;
    std :: cin >> n >> m >> k ;
    std :: vector<int> arr(n) , brr(m) ;
    for(int i= 0; i < n;i++)std :: cin >> arr[i];
    for(int i =0 ;i < m;i++)std :: cin >> brr[i];

    
    for(int i =0;i < m * n - 1 ;i++)
    {
       k =  get_ag(k,brr[i] % m,arr[i/m]);
    }

    std :: cout << k << std :: endl;

    return ; 
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}