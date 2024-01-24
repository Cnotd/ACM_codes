#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

bool cmp(std :: pair<int,int> A , std :: pair<int,int> B)
{
    return A.first < B.first;
}


void solve()
{
    std :: vector<std :: pair<int , int>> arr;
    for(int i = 0;i < 10;i++)
    {
        int tmp ;
        std :: cin >> tmp ;
        std :: cin >> arr.push_back({tmp,i});
    }

    std :: sort(arr.begin(),arr.end(),cmp);

    for(int i = 0;i < n ;i ++)
    {
        if(!(arr[i] ^ arr[i+1]))
        {
            std :: cout << arr[i].second << ' '; 
        }
    }

}
int main() 
{
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}