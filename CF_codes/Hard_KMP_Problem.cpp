#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    std :: string a , b;
    std :: cin >> a >>  b ;

    
    int cnt[10000];
    std :: map<char,int> map;
    memset(cnt,0,sizeof(cnt));
    map.clear();


    for(int i = 0;i < a.size();i++)cnt[a[i]]++;

    
    int ans = 1e5 + 7 ;

    for(int i =0 ;i < b.size();i++)
    {
        map[b[i]]++;
    }

    for(auto A : map)
    {
       // std :: cout << A.first << ' '<< A.second << std :: endl;
       // std :: cout << cnt[A.first] << std :: endl;
        if(!cnt[A.first]){std :: cout << 0 << std :: endl;map.clear();return ;}
        ans  = std :: min(cnt[A.first]/A.second,ans);
    }
    

    std :: cout << ans << std :: endl;
    map.clear();
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}