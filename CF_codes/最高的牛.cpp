#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926

using i64 = long long;

int n , p , h , m ;

std :: set<std :: pair<i64 ,i64 >> set;  



void solve() 
{
    
    std :: cin >> n >> p >> h >> m;
    std :: vector<i64> d(n + 2,0);

    d[1] = h;
    for(i64 i = 0,a,b ;i < m;i++)
    {
        std :: cin >> a >> b;
        if(a > b)
        {
            std :: swap(a,b);
        }
        if(!set.count({a,b}))
        {
            set.insert({a,b});
            d[a + 1] -- ;
            d[b] ++ ;
        }
    }

    for(int i = 1;i <= n;i++)
    {
        d[i] += d[i - 1];
        std :: cout << d[i] << std :: endl;
    }



return ;
    
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}