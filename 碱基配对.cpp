#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
int N = 100 ;


void solve() {
    int tmp = abs('A' - 'U');
    int tm = abs('C' - 'G');
        int len ;
        std :: string A ;
        std :: string B ;
        std :: cin >> len >> A >> B ;
       
       int a = 0 , g = 0 , c = 0, u = 0;

        int ans = len ;
        for(int i = 0 ;  i < len ;i ++){
            if(abs(A[i] - B[i]) == tmp || abs(A[i] - B[i]) == tm){
                ans -- ;
                continue;
                }
            if(A[i] == B[i] && A[i]== 'A') a++;
            if(A[i] == B[i]  && A[i] == 'U') u++;
            if(A[i] == B[i] && A[i] == 'C') c++;
            if(A[i] == B[i] && A[i] == 'G') g++;

        }

        //std :: cout << a << ' ' << u << std :: endl;

        ans -= std :: min(a,u);
        ans -= std :: min(c,g);
       
        std ::cout << ans << std :: endl;

        return ;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}