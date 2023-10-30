#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

i64 ans = 0 ;

void hannoi(int n,int sta, int tool, int end)
{
    if(n == 0)return ;
    hannoi(n-1,sta,tool,end); // 把上层的建筑移动到end柱子 ；
    ans++; // 把底盘移动到tool柱 ；
    hannoi(n-1,end,tool,sta);// 把上层的建筑从end移动到sta ；
    ans++; // 把最大盘从tool移动到end ；
    hannoi(n-1,sta,tool,end);// 递归处理执行（n - 1）个盘子 ； 
    
    return ;
}


void solve() 
{
    int n = 0 ;
    std :: cin >> n ;
    hannoi(n,1,2,3);    
    std :: cout << ans << std :: endl ;

    return ;
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}