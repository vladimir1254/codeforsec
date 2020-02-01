// https://codeforces.com/problemset/problem/459/A
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main() {
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if(x1-x2==0 || y1-y2==0 || ( abs(x1-x2)==abs(y1-y2)))
   {
       int x3,y3,x4,y4;
       int r=floor(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));// ответ - целое число.
      if(abs(x1-x2)==abs(y1-y2))
       {
               x3 = x2;
               y3 = y1;
               x4=x1;
               y4=y2;
       }
       else
       {
          if(x1-x2==0)
          {
              x3=x1+r;
              y3=y1;
              x4=x2+r;
              y4=y2;
          }
          else
          {
              x3=x1;
              x4=x2;
              y3=y1+r;
              y4=y2+r;
          }
       }
       cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
   } else
       cout<<-1;
    return 0;
}
