#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   double p=0;
   for(int i=1;i<=n;i++)
   {
       p+=1.0/i;
   }
   cout<<p;
}
