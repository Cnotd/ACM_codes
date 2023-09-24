#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e5 + 7 ;
int arr[N] ;
bool st[N] ;
int tmp = 1;
std :: priority_queue<int , std :: vector<int>,std :: greater<int>> brr;

void solve() {
    std :: string s ; 
    std :: cin >> s ;
    int cg ;
  
    
    if(s == "New" && brr.empty()){
        std :: cout << tmp << std :: endl;
       st[tmp++] = true ;
    }
    if(s == "New"&&!brr.empty()){
        std ::cout << brr.top() << std :: endl;
        st[brr.top()] = true ;
        brr.pop();
    }
    if(s == "Delete"){ std :: cin >> cg ;
    if(!st[cg]){
            std ::cout << "Failed" << std :: endl;
            return ;
        }
       
        st[cg] = false ;
        brr.push(cg); 
        
        std :: cout << "Successful" << std :: endl;
    }
   // std :: cout << "---" << tmp << "----" << cg <<std :: endl;
    return ;
}

int main() {
    IOS

    int _t =  1;
    std :: cin >> _t;

    while (_t--)
        solve();
}