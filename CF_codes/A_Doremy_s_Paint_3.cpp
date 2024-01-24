#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void solve() 
{
    int n ;
    std :: cin >> n ;
    std :: vector<int> arr(n);
    std :: unordered_map<int,int> map;

    int a = 100000+7  , b  = 0;
    for(int i = 0 ; i < n ;i ++)
    {
        
        std :: cin >> arr[i];
        map[arr[i]]++;
        a = std :: min(a,arr[i]);
        b = std :: max(b,arr[i]);
    }

   // std :: cout << a << ' ' << b << std :: endl;

    if(n == 2){std :: cout << "Yes\n" ;return ;}
    if(map.size() > 2){ std :: cout << "No\n";return ;}
    if(abs(map[a] - map[b]) <= 1)
    {
        std :: cout << "Yes" << std :: endl;
    }
    else
    {
        std :: cout << "No\n";
    }


    return ;

}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();


        return 0;
}