#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
int n , f ;

bool ck(std :: vector<double>  a,double m)
{
    for(int i = 1;i <= n; i++)a[i] -= m;
    
    std :: vector<double> Sum(n + 2);

    double max_L = -1 , min_pre = 1e10; 
    for(int i = 1;i <= n;i++)
    {
        Sum[i] = Sum[i-1] + a[i];
    }   

    // for(auto A : Sum)std :: cout << A << ' ';
    // std ::cout << std ::  endl;

    for(int i = 0 , j = f;j <=n;i++,j++)
    {
        min_pre = std :: min(min_pre,Sum[i]);
        
        max_L = std :: max(max_L,Sum[j]-min_pre); 
    }
  //  std :: cout << max_L << std :: endl;

    if(max_L >= 0)return true ;
    return false ;

}

void solve() 
{
    
    std :: cin >> n >> f;
    std :: vector<double> arr(n + 2 , 0);


    for(int i = 1 ;i <= n ;i++)
    {
        std :: cin >> arr[i];
    }

    std :: vector<double> Sum(n + 2);
    for(int i = 1 ;i <=n;i++)Sum[i] = arr[i] + Sum[i-1];

    double l = 0 , r = 20000;
    while(r - l > 1e-5)
    {
        double mid = (l + r) / 2;
        if(ck(arr,mid))l = mid ;
        else r = mid ;
       // std :: cout << l << ' ' << r << std :: endl;
    }
    std :: cout << (i64)(r* 1000) << std :: endl;

    return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}