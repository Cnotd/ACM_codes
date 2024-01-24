#include <bits/stdc++.h>

// #include<iostream>
// #include<algorithm>
// #include<cstring>
// #include<cstdio>
// #include<vector>

#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
// using i64 = long long;
typedef long long i64 ;
#define  vec  std :: vector

const int N = 5000;


vec<vec<i64>> arr(N,vec<i64>(4));
void solve() 
{
    int n ;
    std :: cin >> n ; 
    
    for(int i = 0 ; i < n; i ++)for(int j = 0;j < 4;j++)std :: cin >> arr[i][j] ;

    vec<i64> a ;
    vec<i64> b ;
    
    for(int i = 0;i < n ;i ++ )
    {
        for(int j = 0; j < n;j ++)
        {
            a.push_back(arr[0][i] + arr[1][j]);
        }
    }

    for(int i = 0;i < n;i ++)
    {
        for(int j = 0 ;j < n;j ++)
        {
            b.push_back(arr[2][i] + arr[3][j]);
        }
    }

    std :: sort(b.begin(),b.end());


    i64 ans = 0 ; 
    for(int i = 0;i < a.size();i++)
    {
        auto t1 = std :: upper_bound(b.begin(),b.end(),(-a[i]));
        auto t2 = std :: lower_bound(b.begin(),b.end(),(-a[i]));
    
        ans += abs(t1-t2);
    }

    std :: cout << ans << std :: endl;

    
return ;
  
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();

        return 0;
}