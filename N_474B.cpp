#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int>res(m);
    for(int i = 0;i<m;i++)
    {
        int right=n;
        int left=0;
        int mid = 0;
       while(true)
        {
           if(b[i]>a[0]) {
               mid = (left + right) / 2;
                   if (b[i] > a[mid])
                   {
                       left = mid;
                   }
                   else {
                       if (b[i] <= a[mid]) {
                           right = mid;
                       }
                       if (b[i] <= a[mid] && b[i] > a[mid - 1]) {
                           res[i] = mid + 1;
                           break;
                       }
                   }
           }
            else
            {
                res[i]=1;
                break;
            }
        }

    }
    for(int i =0;i<m;i++)
        cout<<res[i]<<endl;
    return 0;
}
