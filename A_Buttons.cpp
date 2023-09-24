#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

bool bl(int a , int b , int c){
    if((c & 1) == 1){
        if(a + c / 2 >= b + c/2)return true;
        else
            return false;
    }
    else
        if(a + c / 2 > b + c / 2)return true;
        else
            return false;
}

void solve() {
    
    int a , b , c;
    std :: cin >>a >> b >> c;
 
    if(bl(a , b , c))puts("First");
    else
        puts("Second");
 
    return ;

}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();

        return 0 ;
}