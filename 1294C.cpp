#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(auto i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>a;
        for(int j = 2;j<=sqrt(n);j++)
        {
            if(n%j==0) {
                a.push_back(j);
                a.push_back(n / j);
            }
        }
        bool fl = true;
        for(int j1=0;j1<a.size();j1++)
        {
           for(int j2=a.size()-1;j2>=j1+1;j2--)
            {
                if(a[j2]*a[j1]<n/2)
                for(int j3=a.size()-1;j3>=j2+1;j3--)
                {
                    if(a[j1]*a[j2]*a[j3]==n && a[j1]!=a[j2] && a[j1]!=a[j3] &&a[j2]!=a[j3])
                    {
                        fl = false;
                        cout<<"YES"<<endl;
                        cout<<a[j1]<<" "<<a[j2]<<" "<<a[j3]<<endl;
                        break;
                    }
                }
                if(!fl)
                    break;
            }
            if(!fl)
                break;
        }
        if(fl)
            cout<<"NO"<<endl;
    }
}
