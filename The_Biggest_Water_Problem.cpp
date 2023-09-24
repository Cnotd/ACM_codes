#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

int re(int a){

    int ans = 0 ;
    
    while(a){
        ans += (a % 10);
        a /= 10;
    }
    if(ans < 10)return ans ;
   return re(ans);
}

void solve() {
    int n = 0 ;
    std :: cin >> n ;
    std ::cout << re(n);

    return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}