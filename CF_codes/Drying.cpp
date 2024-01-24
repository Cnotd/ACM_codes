//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<cstring>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


bool check(std :: vector<int> &arr,int ans , int k)
{
    i64 sum = 0;
    for(auto A : arr)
    {
        if(A <= ans)continue ;

        sum += (A + k -1) / k ; 
    }   
    //std :: cout <<  sum << std :: endl;

    if(sum > ans)
        return true; 
    else 
        return false;


}

void solve()
{
    int n = 0 ; 
    std :: cin >> n ;

    std :: vector<int> arr(n);

    int max = -1 ;
    for(int i = 0; i < n;i ++ )
    {
        std :: cin >> arr[i];
        max = std :: max(arr[i],max);
    }
    int k ;
    std :: cin >> k;
    int l = 1 , r = max ;
    int mid = 0 ; 
    while(l < r)
    {
       // std :: cout << l  << ' ' << r << std :: endl;
         mid = (l + r + 1) >> 1 ;
        if(check(arr,mid,k))
        {
            r = mid - 1;
        }
        else
        {
            l = mid ;
        }
    }
    std :: cout << mid << std :: endl;



}

int main() {
    IOS

    int _t =  1;
   // std :: cin >> _t;

    while (_t--)
        solve();

return 0;
}