// https://codeforces.com/contest/1291/problem/0
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
using namespace std;
int main() {
  int t;
  cin>>t;
  for(int p=0;p<t;p++)
  {
      int n;
        int64_t s;
      cin>>n;
      vector<int>a(n);
      for(int i =0;i<n;i++)
      {
          char s;
          cin>>s;
          a[i]=s-'0';
      }
     int kol=n-1;
    while(kol>0 && a[kol]%2==0)
    {
        a[kol]=-1;
        kol--;
    }
    if(kol>0)
    {
    int chet=0,nechet=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            if(a[i]%2==0)
                chet++;
            else
                nechet++;//считаем четные и нечетные.
        }
    }
    if(nechet%2==0)
    {
            for(int i = 0;i<n;i++)
                if(a[i]!=-1&& a[i]!=0)
                    cout<<a[i];
                cout<<endl;
    } else
        if(nechet==1)
            cout<<-1<<endl;
            else
         {
             for(int i=0;i<n;i++)
                 if(a[i]%2!=0 && a[i]!=-1) {
                     a[i] = -1;
                     nechet--;
                     break;
                 }
                     for(int i = 0;i<n;i++)
                         if(a[i]!=-1 && a[i]!=0)
                             cout<<a[i];
                         cout<<endl;
         }
        }
    else
        cout << -1 << endl;

  }
    return 0;
}
