#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ; 
    std :: cin >> n ; 
    std :: vector<int> arr(n);
    std :: map<int,int> cnt;

    for(int i = 0;i < n;i++)std :: cin >> arr[i] ;
    for(int i = 0;i < n;i++)
    {
        auto tm = arr[i];
        for(int j = 2;j * j <= tm;j++)
        {
            while(!(tm%j))
            {
                cnt[j]++;
                tm /= j;
            }
        }
        if(tm > 1)cnt[tm]++;
    }

    for(auto A : cnt)
    {

       //  std :: cout << A.second << ' ';
       if(A.second % n)
        {
            std :: cout << "NO\n";
            return ; 
        }
    }
    std :: cout << "YES\n";
    
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