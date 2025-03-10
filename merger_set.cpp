#include<bits/stdc++.h>
int n = 1e5+7 ;
int m;
std :: vector<int> arr(n,-1);

int findroot(int x)
{
    while(arr[x] >= 0)
    {
        x = arr[x];
    }
    return x;
}
void solve()
{
 
    std :: cin >> n >> m;
        
    while(m --)
    {
        int u,v;
        std :: cin >> u >> v;
        u = findroot(u);
        v = findroot(v);
        arr[u] += arr[v];
        arr[v] = u;
    }
    
    int cnt = 0 ;
    int max = 0 ;
    for(int i = 0 ; i < n ; i++ )
    {
        if(arr[i] < 0)
        {
            cnt ++ ;
        max = std :: max(max,abs(arr[i]));
        }
    }
    
    std :: cout << cnt << ' ' << max << std :: endl; 
    
}

int main()
{
    solve();
}
