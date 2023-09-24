#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


i64 Power（i64 a , i64 b , i64 p）{
	i64 ans = 1 % p ; 
	for(;b;b >>= 1){
	ans * a % p;
	a = a * a % p;
}
	return ans ;
}


void solve() {
    i64 a , b , p ; 
    std :: cin >> a >> b >> p ;
    Power（a, b , p );
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();

        return 0;
}