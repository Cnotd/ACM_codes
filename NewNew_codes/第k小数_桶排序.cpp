#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7 ;

int arr[N] ;

void solve() 
{
    memset(arr , 0 , sizeof arr);
    int n ,  k ; 
    //std :: vector<int> arr(n + 1) ;
    std :: cin >>  n >> k; 
    for(int i = 0 ;i < n ; i++)
    { 
        int tmp ;
        std :: cin >> tmp ;
        arr[tmp] ++ ;    
    } 

//    for(int i = 1 ;  i < 5 ;i++)std ::cout << arr[i] << ' ';
//    std :: cout << std :: endl ;

    int sum = 0 ;
    for(int i = 1 ;i <= 1e6;i++ )
    {
        sum += arr[i];
        if(sum >= k)
        {
            std :: cout << i << std :: endl ;
            break;
        }
    }

    return ;

}

int main() 
{
    IOS

    int _t =  1;
        std :: cin >> _t;

    while (_t--)
        solve();
}