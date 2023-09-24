#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() {
    int a , b ;
    std :: cin >> a >> b ;
    double ans = (a + b) * (a + b) * PI ;
    printf("%lf",ans);

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}