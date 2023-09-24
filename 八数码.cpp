#include <bits/stdc++.h>
#include<unordered_map>
#include<cstring>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

int dx[4] = {1 , -1 , 0 , 0},dy[4] = {0 , 0 , 1 , -1};
std :: string end = "12345678x"; // 终止条件 ；

int bfs(std :: string sta){
    std :: queue<std :: string > q; // 使用队列维护 ；
    std :: unordered_map<std :: string , int> d; // 给每个一个状态字符串一个特定的距离编号 ，  ；
        q.push(sta);
        d[sta] = 0 ; // 设定初始状态的距离哈希值 ；

        while(!q.empty()){
            auto t = q.front();
 
            q.pop();
            
            int distance=d[t]; // 当前状态到起点的距离 ；
 
            if(t == end)return distance ;    // 如果已经到达目标状态 ， 跳出 ；
             int k = t.find('x');   //    找到一维字符串中可执行交换的‘x’的索引 ； 
             int x = k / 3 , y = k % 3 ;    // 转换为二维坐标 ；
 
            for(int i = 0 ; i < 4 ;i++){    // 在二维的角度下进行模拟四个方向的转移 ；
                int a = x + dx[i] , b = y + dy[i]; // 横纵坐标 ；
                if(a >= 0 && a < 3 && b >= 0 && b < 3){ // 判断坐标是否合法 ；
                   std :: swap(t[k],t[a*3+b]); // 执行交换操作 ； 
                    if(!d.count(t)){ 
                        d[t] = distance + 1 ; // 如果所有前置状态都未及 ， 更新该点的距离 ；
                        q.push(t); // 更新状态队列 ； 
                    }
                 std :: swap(t[k],t[a * 3 + b]) ; // 还原状态 ， 重新进行判定 ； 
                }
            }
        }         
        return -1 ;
}

int main() {
    IOS

std :: string sta ; 
//  读取初始状态字符串 ； 
for(int i = 0 ;i < 9 ; i ++ ){
    char c ; 
    std :: cin >> c ; 
    sta += c ;
}

std :: cout << bfs(sta) << std :: endl;

return 0;
}