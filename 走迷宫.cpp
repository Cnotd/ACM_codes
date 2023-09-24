#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


typedef  std :: pair< int , int > PII ;

const int N = 107;
int n , m ;
int map[N][N] ;
int dist[N][N] ;
std :: deque< PII > q ;
int dx[5] = {1 , -1 , 0 , 0};
int dy[5] = {0 , 0 , 1 , 1 };

void bfs(){
   q.push_back({ 1 , 1 }) ;
   while(!q.empty()){

    for(int i = 0 ;i < 4;i ++ ){
         
         int nx = q.front().first + dx[i] ; 
         int ny = q.front().second + dy[i] ;
         
         if(nx < 1|| nx > n || ny < 1 || ny > n)continue ;
         if(map[nx][ny])continue;
         q.push_back({nx , ny});

    }
    q.pop_front();
    }

}


void solve() {
    
    std :: cin >> n >> m ; 
    for(int i = 0 ;i < n ; i ++ ){
        for (int j = 0 ; j < m ;j++)
        {
            std :: cin >> map[i][j];
        }
    }

    bfs() ;
       
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)solve();

return 0;
}