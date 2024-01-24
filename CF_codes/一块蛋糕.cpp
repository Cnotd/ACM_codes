#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;




void solve() 
{

    int w , h ;
    std ::cin >> w >> h ;
    int n = 0 ; 
    std ::cin >> n ;

    std :: vector<std :: pair<int , int>> pot(n);

    for(int i= 0 ;i <n ;i ++)std :: cin >> pot[i].first >> pot[i].second ;

    sort(pot.begin(),pot.end());

    int A , B ;
    std :: vector<int> Arr(A + 2);
    std :: vector<int> Brr(B + 2);

    std :: cin >> A ;
    for(int i = 1;i <= A;i++)std :: cin >>Arr[i];    
    
    std :: cin >> B ;
    for(int i = 1;i <= B;i ++)std :: cin >> Brr[i];

    std :: map<std :: pair<int,int> , int > map ;

    for(int i = 1 ;i <= n;i ++ )
    {
        int l = 1 , r = w ;
        while(l < r)
        {
            int mid = l + r >> 1;
            if(mid <= pot[i].first)
            {
                l = mid  + 1;
            }
            else
            r = mid ;
        }
        int x = l ; 

        l = 1 , r = h ;
        while(l < r)
        {
            int mid = l + r >> 1 ;
            if(mid <= pot[i].second)
            {
                l = mid  + 1;
            }
            else
            {
                r = mid ;
            }
        }
       int y = l ;
    
        map[{x,y}] ++ ;
    }

    int max = 0 ; 
    int min = 1e9; 

for(auto t : mp)
{
    max = std :: max(max,t.second);
    min = std :: min(min,t.)
}

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}