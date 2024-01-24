#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
  int n = 0 ;
  std :: cin >> n ;
  std :: vector<int> arr( n ) ;

    for(int i = 0 ;i < n ;i ++)std :: cin >> arr[i] ;
  
    int pmin = 0 ;
    int min = arr[0];
    for(int i =  0 ;i < n  ;i ++) 
    {
        if(min > arr[i])
        {
        pmin = i;
        min = arr[i] ;
        }
    }
    for(int i = pmin + 1;i < n - 1 ;i++)
    {
        if(arr[i] > arr[i + 1])
        {
            std :: cout << -1 << std :: endl;

            return ;
        }
    }
  
  
    std :: cout << pmin << std :: endl;

    return ;



}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}