#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n , m , k ;
    std :: cin >> n >> m >> k;


    std :: vector<int> arr ;
    std :: string s ;
    std :: cin >> s ;

    auto plan_A = s;
    auto plan_B = s + s ;

    int A = s.size();
    int B = plan_B.size();

    int dg = (n * m + k - 1) / k ;

    
    if(dg < 2)
    {
       for(int i = 0 ;i < n;i ++)
        {
            
        }    
    } 
    
    
    
    
}

int main() 
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}