#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e5 + 7 ;

int cnt = 0 ;
int res[N] ;

i64 merge_sort(std :: vector<int> & arr,int l , int r)
{
    if(l >= r)return 0;

    int mid = l + r >> 1 ;
   i64 ans =  merge_sort(arr,l,mid) + merge_sort(arr,mid + 1,r);


    int k = 0 ;
    int i = l , j = mid + 1;
    while(i <= mid && j <= r)
    {
        if(arr[i] <= arr[j])res[k++] = arr[i++];
        else 
        {
        res[k++] = arr[j++];
        ans += mid - i + 1;
        }
    }
    while(i <= mid)res[k++] = arr[i++];
    while(j <= r)res[k++] = arr[j++];

    for(int i = l , j = 0;i <= r;i++ , j++ )arr[i] = res[j];

    return ans ;
}

void solve() 
{
    int n = 0 ; 
    std :: cin >> n ;
    std :: vector<int> arr(n + 1);
    for(int i = 0 ;i < n ;i ++)std :: cin >> arr[i] ;

    std :: cout <<  merge_sort(arr,0,n-1)<< std :: endl ;
    return ;
}

int main() 
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}