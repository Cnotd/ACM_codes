#include<bits/stdc++.h>

const int N = 1e6 + 7 ;


int q[N] ;

void quick_sort(int * q,int l , int r)
{   
    if(l >= r)return ;

    int x = q[(l + r) >> 1];

    int i = l - 1 , j = r + 1 ;
    while(i < j)
    {
        do i ++ ; while(q[i] < x);
        do j -- ; while(q[j] > x);
       if(i < j) std :: swap(q[i],q[j]); 
    }
    
    quick_sort(q,l,j),quick_sort(q,j + 1,r);
    
}


int main()
{
    int n = 0;
    std :: cin >> n ;
    for(int i = 0 ;i < n ; i++)std :: cin >> q[i];
     quick_sort(q,0,n - 1);


    for(int i = 0 ; i < n ;i++ )std :: cout << q[i] << ' ' ;
    std :: cout << std :: endl ;
    
    return 0;
}