#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve()
{
    int n , k;
    std :: cin >> n >> k;
    std :: string s ;
    std :: cin >> s;

    int A = 0 ;
    int B = 0 ;

    std :: vector<int> pre_cnt(s.size()+1,0);
    std :: vector<int> suf_cnt(s.size()+1,0);

    int cnt = 0 ;
    for(int i = s.size()-1;i>=0;i--)
    {
       if(s[i] == 'B')cnt ++ ;
       suf_cnt[i] = cnt;
    }

    cnt = 0 ;
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'B')cnt++;
        pre_cnt[i] = cnt;
    }

    if(cnt == k){std :: cout << 0 << std :: endl;return ;}
    else if(cnt > k)
    {
        std :: cout << 1 << std :: endl;
        for(int i = 0 ;i < n;i++)
        {
            if(pre_cnt[i] == abs(k - cnt))
            {
                std ::cout << i + 1 << ' '<<'A'<<std :: endl;
                return ;
            }
        }
    }
    else 
    {
        std :: cout << 1 << std :: endl;
        for(int i = 0 ;i < n;i++)
        {
            if(i + 1  == k - suf_cnt[i + 1])
            {
                std :: cout << i + 1 << ' '<< 'B'<<std :: endl;
                return ;
            }
        }
    }
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}