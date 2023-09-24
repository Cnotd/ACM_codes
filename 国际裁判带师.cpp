#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() {
   std :: string s ;
    std :: cin >> s ;
    int a = 0 ; 
    int b = 0 ; 
    int ans = 0 ;
    for(auto A : s){
        if(A == 'a')a ++ ;
        if(A == 'b')b ++;
        if(a < 10 && !b){
            ans += 3;
        }
        else if(a >= 10 && !b){
            ans += 2;
            if(a % 10 == 0)ans ++ ;
        }
        else if(a < 10 && b < 10){
            ans += 2 ;
        }
        else if(a >= 10 && b >= 10){
            if(a % 10 == 0)ans ++ ;
            if(b % 10 == 0)ans ++ ;
        }
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