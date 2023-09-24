#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 20 ;
char g[N][N] ;
bool row[N],col[N],dg[N],udg[N] ;
int n = 0;

/* 按行进行枚举 ，每行只能有一个 ， 枚举列 ， 给对角加上限制条件  */

void dfs(int x){
    if(x == n){
        for(int i = 0 ; i < n ; i ++ )puts(g[i]); // 搜到了第n行 ；
       puts("");
       return ;
    }
    for(int i = 0 ;i < n ; i ++){
        if(!col[i] && !dg[i + x] && !udg[i - x + n ]){
            g[x][i] = 'Q' ;
            col[i] = dg[i + x] = udg[i - x + n] = true ;
            dfs(x + 1);
            col[i] = dg[i + x] = udg[i - x + n] = false ;
            g[x][i] = '.';
        }
    }
    return ;
}
int main() {
    IOS

    std :: cin >> n ;
        for(int i = 0 ;i < n ; i++)
            for(int j = 0 ;j < n ; j ++) g[i][j] = '.';

    dfs(0);

return 0 ;
}