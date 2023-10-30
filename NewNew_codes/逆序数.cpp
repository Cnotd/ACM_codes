#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7 ;
 
int tmp[N] ; i64 cnt = 0 ;

i64 merge(std :: vector<int> & q,int l , int r)
{
    if(l >= r)return 0;
    
    int mid = l + r >> 1 ;
    
    i64 ans  =  merge(q,l,mid) + merge(q,mid + 1,r);

    
    int i = l , j = mid + 1;
    int k = 0 ;

    while(  i <= mid && j <= r)
    {
        if(q[i] <= q[j])tmp[k++] = q[i++];
        else
        {
            tmp[k++] = q[j++];
            ans += mid - i + 1;  
        }           
    }

    while(i <= mid)tmp[k++] = q[i++];
    while(j <= r)tmp[k++] = q[j++] ; 

    for(int i = l ,j = 0;i <= r;i++ , j ++ )q[i] = tmp[j];

    return ans;

}



int main() 
{
    IOS

    int n = 0 ;
    std :: cin >> n ; 
    std :: vector<int> q(n);
    for(int i = 0 ;i < n ;i ++)std :: cin >> q[i];
    std :: cout << merge(q,0,n-1) << std :: endl;

   
}