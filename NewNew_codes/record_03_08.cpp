#include<bits/stdc++.h>

void solve()
{
    int l = 0 ;
    int n = 0 ;
    std :: cin >> l >> n;
    
    int min = 0x3f ;
    int max = -1 ;
    for(int i = 0;i < n ;i ++)
    {
        int tmp;
        std :: cin << tmp;
        min = std :: min(min,tmp);
        max = std :: max(max,tmp);
    }
    
    min = std :: min(max({abs(min-0),abs(l + 1-max)}),max();
    max = std :: max({abs(max),abs(l + 1-min)});

    std :: cout << min << ' ' << max << std :: endl;

    return ;

}

int main()
{
    int n = 0 ; 
    std :: cin >> n;
    while(n--)
    {
        solve();
    }
   return 0; 
}