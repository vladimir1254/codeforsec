// https://codeforces.com/problemset/problem/459/B
#include <iostream>
#include <vector>

using namespace std;
int64_t fact(int64_t k)
{
    if(k==1) return 1;
    return fact(k-1)+k;
}
int main() {
   int n;
   cin>>n;
   vector<int64_t> a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int64_t max =a[0];
   int64_t min=a[0];
   for(int i=1;i<n;i++)
   {
       if(a[i]>max)
           max=a[i];
       if(a[i]<min)
           min=a[i];
   }
   int64_t nmax=0;
   int64_t nmin=0;
   for(int i = 0;i<n;i++)
   {
       if(a[i]==max) {
           nmax++;
       }
       if(a[i]==min)
           nmin++;
   }
   if(max!=min)
   cout<<max-min<<" "<<nmax*nmin;
   else
       cout<<max-min<<" "<<fact(nmax-1);
    return 0;
}
