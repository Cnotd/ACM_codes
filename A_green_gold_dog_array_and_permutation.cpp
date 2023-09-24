#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() {
    int n = 0 ; 
       std :: cin >> n ; 
       for(int i = 2 ; i * i <= n ;i ++ ){
        std :: cout << i << std :: endl;
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