// https://codeforces.com/problemset/problem/175/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> m,res;
    for(int i = 0;i<n;i++)
    {
        string s;
        int k;
        cin>>s>>k;
        if(m[s]<k)
            m[s]=k;
    }
    for(auto z : m) {
        int c=1;
        for (auto k : m) {
            if (z.first!=k.first && z.second>=k.second)
            {
                c++; // кол-во игроков не лучших данного.
            }
        }
        res[z.first]=c;// для него сопоставили кол-во игроков не лучших его.
    }
    cout<<res.size()<<endl;
    for(auto k:res)
    {
        if(k.second*100>=99*res.size())
        cout<<k.first<<" "<<"pro"<<endl;
            else {
            if (k.second * 100 >= 90 * res.size())
                cout << k.first << " " << "hardcore" << endl;
            else {
                if (k.second * 100 >= 80 * res.size())
                    cout << k.first << " " << "average" << endl;
                else {
                    if (k.second * 100 >= 50 * res.size())
                        cout << k.first << " " << "random" << endl;
                    else
                        cout<<k.first<<" "<<"noob"<<endl;
                }
            }
        }
    }


   return 0;
}
