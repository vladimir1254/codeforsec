// http://codeforces.com/problemset/problem/189/A
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;  // ax+by+cz = n
    int res=0;          // cz= n-by-ax
    for(int i = 0 ; i<=n/a;i++)
    {
        for(int j = 0;j<=n/b;j++)
        {

            if(res<i+j+(n-i*a-j*b)/c && (n-i*a-j*b)%c==0 && (n-i*a-j*b)>=0)
            {
                res=(n-i*a-j*b)/c+i+j;
                }
        }
    }
    cout<<res;
    return 0;
}
