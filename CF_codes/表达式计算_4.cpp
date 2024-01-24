#include <bits/stdc++.h>
#define IOS std :: ios::sync_with_stdio(0); std :: cin.tie(0); std ::cout.tie(0);
#define PI 3.1415926
using i64 = long long;


int divide(std :: string & s,int l , int r)
{

    int cnt = 0;
    int pos1 = -1;
    int pos2 = -1;
    int pos3 = -1;
    for(int i = l;i <= r;i++)
    {
        if(s[i] == '(')cnt++;
        if(s[i] == ')')cnt--;
        if(!cnt)
        {
        if(s[i] == '+' || s[i] == '-')pos1 = i;
        if(s[i] == '*' || s[i] == '/')pos2 = i;
        if(s[i] == '^')pos3 = i;
        }
    }
    
    if(pos1 != -1)
    {
       // std :: cout << pos1 << std :: endl;
        if(s[pos1] == '+')return (divide( s ,l,pos1 -1) + divide(s,pos1 + 1,r)); 
        else
            {

            int D1 = divide( s ,l,pos1 -1) ;int D2 = divide(s,pos1 + 1,r);
         //   std :: cout << D1 << ' '<< D2 << std :: endl;
            return D1 - D2 ;
             } 
    }
    if(pos2 != -1)
    {
        if(s[pos2] == '*')return (divide(s,l,pos2-1) * divide(s,pos2+1,r));
        else return  (divide( s ,l,pos2 -1) / divide(s,pos2 + 1,r));
    }
    if(pos3 != -1)
    {
       // std :: cout << pos3 << std :: endl;

    return (int)pow(divide(s,l,pos3-1) ,divide(s,pos3+1,r));
     //   return (divide(s,l,pos3-1) ^ divide(s,pos3+1,r));
    }
    if(cnt || s[l] == '(' || s[r] == ')')
    {
        if(cnt > 0) return divide(s,l+1,r);
        if(cnt < 0) return divide(s,l,r-1);
        else return divide(s,l+1,r-1);
    }
    
    int sum = 0;
    for(int i = l;i <= r;i++)
    {
        sum = sum * 10 + s[i] - '0';
    }

// std :: cout << sum << ' ';
    // 根出口 ；
    return sum ;



}

void solve() {

    std :: string s ;
    std :: cin >> s;
    std :: cout << divide(s,0,s.length()-1);

    return ;

}

int main() {
    IOS

    int _t =  1;
    //std :: cin >> _t;

    while (_t--)
        solve();
}