#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n , m ;
    std :: cin >> n >> m ;
    std :: string  a , b;
    std :: cin >> a >> b ;
    

    if(n == 1 ||( n == 2 && a[0]&a[1]))
    {
        std :: cout << "Yes\n";
        return ;
    }


    bool flg = false;
    for(int i= 0 ;i < n -1 ;i++)
    {
        if(a[i]^a[i+1])continue;
        flg = true ;
    }
    if(!flg)
    {
        std :: cout << "Yes\n" ;
        return ;
    } 
    flg = 0 ;

    for(int i = 0;i < m - 1; i++)
    {
        if(b[i]^b[i+1])continue ;
        else 
        {
            flg = true ;
        }
    }

    if(flg || b[0] != b[m-1])
    {
        std :: cout << "No\n" ;
        return ;
    }
    
    int tmp = b[0];

    for(int i =0;i < n -1 ;i++)
    {
        if(a[i] == a[i + 1] && a[i] !=tmp )continue;
        else
        {
            std :: cout << "No\n";
            return ;
        }
    }
    std :: cout << "Yes\n";


    return ;

    
}

int main() {
    IOS

    int _t =  1;
   std :: cin >> _t;

    while (_t--)
        solve();
}