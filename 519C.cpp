// https://codeforces.com/problemset/problem/519/C
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int res=0;
   while((m>=1 && n>=2) ||(m>=2 && n>=1))
       {
       if(n>=m) {
           n -= 2;
           m -= 1;
           res++;
       } else
       {
           m-=2;
           n-=1;
           res++;
       }
       }
       if((n==1 && m>=2) || (m==1 && n>=2))
           res++;

   cout<<res;
   return 0;
}
