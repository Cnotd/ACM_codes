#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n = 0 ; 
    std :: cin >> n ;
    std::vector<std :: vector<char>> arr(n,std::vector<char>(n));
    for(int i = 0;i < n;i++)for(int j = 0;j < n;j ++)std :: cin >> arr[i][j];

    int res = 0 ;
    for(int i = 0;i < n / 2;i++)
        for(int j = 0 ;j <n/2;j++)
        {
            auto tmp = {arr[i][j],arr[j][n - i - 1],arr[n - i - 1][n - j - 1],arr[n - j - 1][i]};
            auto _max = *std :: max_element(tmp.begin(),tmp.end());
            
            for(auto C : tmp)
            {
                res += _max - C;
            }
        }
         
    std :: cout << res << std :: endl;

}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}