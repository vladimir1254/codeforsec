// https://codeforces.com/problemset/problem/476/B
#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
#include <string>
using namespace std;
int fact(int n)
{
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main() {
  string s1,s2;
  cin>>s1>>s2;
  int a=0,b=0;
  int a1=0,b1=0,c1=0;
  for(int i = 0;i<s1.size();i++)
  {
    if(s1[i]=='+')
        a++;
    else
            b++;
  }
    for(int i = 0;i<s2.size();i++)
    {
        if(s2[i]=='+')
            a1++;
        else {
            if (s2[i] == '-')
                b1++;
            else
            if(s2[i]=='?')
                c1++;
        }
    }
    double res=0;
    if(a>a1+c1 || b>b1+c1)
        res=0;
    else
    {
        if((a==a1 && b==b1)&& c1==0)
            res=1;
        else
        {
           // res= ((a-a1)+(b-b1))/pow(2,c1);// C из c по a-a1

res = fact(c1)/(fact(a-a1)*fact(c1-a+a1))/pow(2,c1);
            // kol-vo (+)= a-a1  минусов = b-b1  000 001 010 011 100 101 110 111=> 2^c  c=кол-во ?
        }
    }
    cout<<setprecision(9)<<res;
 
    return 0;
}
