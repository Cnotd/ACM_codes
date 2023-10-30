#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7 ;
int tmp[N] ;
i64 ans = 0;



i64 merge_sort(std :: vector<int> & q,int l , int r)
{
    if(l >= r)return 0;

    int mid = l + r >> 1 ;
   ans = merge_sort(q,l,mid) + merge_sort(q,mid + 1,r);

    int i = l,j = mid + 1,k = 0;
    while(i <= mid && j <= r)
    {
        if(q[i] <= q[j])tmp[k++] = q[i++];
        else
            {
                tmp[k++] = q[j++];
                ans += mid - i + 1;
            }  
    }
    while(i <= mid)tmp[k++]=q[i++];while(j<=r)tmp[k++]=q[j++];
    
    for(int i = l , j = 0 ;i <= r;i++,j++)q[i]=tmp[j];

    return ans ;
}


void solve() 
{
    int n = 0;
    std :: cin >> n ; 
    std :: vector<int> arr(n) ;
    for(int i = 0; i< n ;i++)std :: cin >> arr[i];
    i64 tol = merge_sort(arr,0,n-1);
    tol&=1;

    int m = 0 ;
    std :: cin >> m;
    int a , b ;
    for(int i =0 ;i < m; i++)
    {
        std :: cin >> a >> b;
        int len = abs(a - b) + 1;
        i64 p = len * (len - 1) >> 1;
        p &= 1;
        tol += p ;
        tol %= 2;
        if(tol == 0 || tol == 2)
        {
            std :: cout << "like\n";
        }
        else
        {
            std :: cout << "dislike\n";
        }
    }

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