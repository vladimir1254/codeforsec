// https://codeforces.com/problemset/problem/478/B
#include <iostream>
#include <vector>

using namespace std;
int main() {
   int n,m;
   cin>>n>>m;
   int64_t max,min;
   int64_t mx;
  mx = n-m+1;//  100 1 1 1 1 1  С из n по 2 =  n*(n-1)/2
  max =mx*(mx-1)/2;
  int64_t k=n%m;
  int64_t p = n/m;
      min=p*(p-1)/2*m;
  if(k>0)
  {
   min+=p*k;
  }
  cout<<min<<" "<<max;
    return 0;
}
