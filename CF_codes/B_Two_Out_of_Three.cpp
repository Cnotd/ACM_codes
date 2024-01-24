#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;
 

 
void solve() 
{
    int n = 0 ;
    std :: cin >> n ;
    std :: vector<int> arr(n);
    std :: vector<int> brr(n,1);
    std :: map<int,int> cnt ; 
    
    
    for(int i = 0;i < n ;i++)
    {
        std :: cin >> arr[i];
        cnt[arr[i]] ++ ;
    }
    
    int A = 0 ;

    int con1[2] = {1 ,2};
    int con2[2] = {1 , 3};
    int flg = 0;  
      
    for(int i = 1 ;i <= 100;i++)
    { 
        
        int ptr = 0 , ptr1 = 0 ;

        if(cnt[i] > 1 )
        {

            if(!ptr)
            {
            flg ++ ;
             A = i;

             for(int j = 0;j < n;j++)
             {
                if(arr[j] == A)
                {
                    if(flg == 1)brr[j] = con1[ptr++];
                    if(flg == 2)brr[j] = con2[ptr1++];
                }
                if(ptr == 2 || ptr1 == 2)break;
             }
            } 
        }
       
    }

    if(flg < 2)
    {
        std :: cout << -1 << std :: endl;
        return ;
    }
    else
    {
        for(int i =0 ;i < n ;i++)
        {
            std :: cout << brr[i] << ' ';
        }
        std :: cout << std :: endl;
    }

    return ;
}
 
int main() 
{
    IOS
 
    int _t =  1;
   std :: cin >> _t;
 
    while (_t--)
        solve();

        return 0 ;
}