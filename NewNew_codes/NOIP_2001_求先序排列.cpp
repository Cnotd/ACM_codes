#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

void deal(std :: string A,std :: string B,int l,int r,int root)
{
    int i = 0; 
    if(l>r)return ;
    printf("%c",A[root]);
    
    for(int i = l;i <= r;i++)
    {
       if(A[root]==B[i])  // 找到根 ；
       {
        deal(A,B,l,i-1,root-r+i-1); // 处理左子树；
        deal(A,B,i+1,r,root-1); // 处理右子树 ；
        break;
       } 
    }
}

void solve()
{
    std :: string A , B ;
    std :: cin >> A >> B ;

    int len = A.length() - 1;
    
    deal(A,B,0,len,len);

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