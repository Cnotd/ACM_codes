#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7 ;
int q[N] ;


int quick_sort(int* q , int l , int r , int k)
{
    if(l == r)return q[(l + r) >> 1];

    int x = q[(l + r + 1) >> 1] , i = l - 1 , j = r + 1;

    while(i < j)
    {
        while(q[++i] < x);
        while(q[--j] > x);
        if(i < j)std :: swap(q[i],q[j]);
    }

    int sl = i - l ;
    if(k <= sl)return quick_sort(q,l,j,k);
    else return quick_sort(q,i,r,k - sl);

}

void solve() 
{
    int n , k ; 
    std :: cin >> n >> k;
    for(int i = 0 ;i < n ;i++)std :: cin >> q[i]; 
   std :: cout << quick_sort(q , 0 ,n -1,k) << std :: endl;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}