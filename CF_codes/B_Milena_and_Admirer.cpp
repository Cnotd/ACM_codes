#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int maxn = 200010;
const int mod = 998244353;
int n, k, q;
int x, y;
int a[maxn];

void solve() { 

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    i64 ans = 0; 
    for (int i = n - 2; i >= 0; --i) {
        if (a[i] <= a[i+1]) {
            continue;
        }

        x = a[i+1];
        y = (a[i] + x - 1) / x; // 需要拆分的最少个数
        a[i] = a[i] / y; // 
        ans += y - 1;
    }
    printf("%lld\n", ans);
}


int main() {
   // IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}