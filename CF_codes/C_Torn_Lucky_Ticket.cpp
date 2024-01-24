#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;

int Sum[10][100];

int get_sum(std :: string s)
{
    i64 sum = 0 ;
    for(auto A : s)
    {
        sum += A - '0';
    }

    return sum ;
}

int get_Lsum(std :: string s,int op)
{
    int sum = 0;
    int len = s.size();
    for(int i = 0;i < op;i++)
    {
        sum += s[i] - '0';
    }
    return sum ;

}
void solve() 
{
    memset(Sum,0,sizeof(Sum));
    int n = 0 ;
    std :: cin >> n ;
    std :: vector<std :: string> arr(n);
    for(int i =0 ;i < n ;i++)std :: cin >> arr[i];
    
    for(auto A : arr)Sum[A.size()][get_sum(A)] ++ ;
    
    std :: sort(arr.begin(),arr.end(),[](std :: string A , std :: string B)
    {
        return A.size() < B.size();
    });

    i64 ans = 0 ;
    for(auto A : arr)
    {
        int len = A.length();
        int sum = get_sum(A);
        
        int res = 0 ;
        // 枚举分治点
        for(int i = 0 ;i < len;i++)
        {
            
            if(i == 0 || i == len)
            {
      
                ans += (Sum[len][sum] - 1);
         
            }
            else
            {

                if(i <= len / 2)
                {
                int tmp = sum ;
   
                int L_sum = get_Lsum(A,i);
        
                tmp -= L_sum;
                tmp *= 2;

                tmp -= sum;
       
               res += Sum[len - 2 * i][tmp];
                ans += Sum[len - 2 * i][tmp];
                }
                else
                {
                    int tmp = sum ;
                    int L_sum = get_Lsum(A,i);

                    tmp = 2 * L_sum - tmp ;

                    int t = 2 * i - len ;
                    res += Sum[t][tmp];
                    ans += Sum[t][tmp];
                }
            }
        }
    }
    ans += n;
     std :: cout << ans << std ::endl;
}

int main() {
    IOS

    int _t =  1;
  // std :: cin >> _t;

    while (_t--)
        solve();
}