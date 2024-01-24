#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


std :: string s;

// 分治 
// 已经完成


i64 conversion(int l , int r)
{
    i64 sum = 0 ;
    for(int i = l;i <= r;i++)
    {
        int tmp = s[i] - '0';
        sum = sum * 10 +tmp;
    }

    return sum%10000;
}

i64 divide(int l,int r)
{
    int pos1 = -1;
    int pos2 = -1;
    for(int i = l;i <= r;i++)
    {
        if(s[i] == '+')
        {
            pos1 = i;
            break;
        }
        if(s[i] == '*')pos2 = i;
    }

    if(pos1 != -1)return (divide(l,pos1-1) + divide(pos1+1,r))%10000;
    if(pos2 != -1)return (divide(l,pos2-1) * divide(pos2+1,r))%10000;

    return conversion(l,r);
}


void solve() {

    std :: cin >> s ;
    int len = s.length()-1;
    i64 ans = divide(0,len) ;
    if(ans > 9999)ans %= 10000;

    std :: cout << ans << std :: endl;

    return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}