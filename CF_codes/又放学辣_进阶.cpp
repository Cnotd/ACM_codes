#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

const int N = 1e6 + 7;

int n , m , k;
int cnt[1000] ;


bool check(int l , int r,int & f,int &c)
{
    for(int i = 1;i <= m ;i++)
    {
        if(i == f || cnt[i] < )continue ;
        c -=         
    }
    if(c <= 0)return true;
    else return false;

}

void solve()
{
  std :: cin >> n >> m >> k;
  

  for(int i = 0 ;i < n ;i ++)
  {
    int c = 0 ;
    std :: cin >> c ;
    cnt[c]++;
  }

  for(int i = 1 ;i <= m;i++)
  {
    int cur = n - k - cnt[i];
    if(cur < 0) {std :: cout << -1 << ' ';continue;}
    int l = 0 , r = n , mid = (l + r) >> 1;
    while(l < r)
    {
        if(check(l,r,i,cur))
        {

        }
        else
        {

        }
    }
  }
 return; 
}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}