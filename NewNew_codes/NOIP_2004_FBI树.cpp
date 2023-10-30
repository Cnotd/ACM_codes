#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

std :: string s ;

char FBI(int l,int r)
{
   // std :: cout << 1 << std :: endl;
    if(l == r)
    {
        char tmp = ((s[l] == '1')?'I':'B');
        std :: cout << tmp;
        return (s[l] == '1')?'I':'B';
    }
    int mid = l + r >> 1;
  //  std :: cout << mid << std :: endl;
    char ll = FBI(l,mid);
    char rr = FBI(mid + 1,r);
  //  std :: cout << ll << rr ;

    if(ll == 'F'||rr == 'F'||ll != rr)
    {
        std :: cout << 'F';
        return 'F';
    }
    else 
    {
        std :: cout << ll ;
        return ll;
    }
    
}
void solve() {
    int n = 0; 
    std :: cin >> n;
   std :: cin >> s;
    int r = s.length()-1;
    FBI(0,r);
    return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}