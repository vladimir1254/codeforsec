// https://codeforces.com/problemset/problem/451/B
#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int64_t> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i = 0;
    while(i<n-1 && a[i]<=a[i+1])
    {
        i++;
    }
    int k = i;
    while(i<n-1 && a[i]>=a[i+1])
    {
        i++;
    }
    if(i==n-1)
    {
        if((k>0 && a[k-1]<=a[n-1]) || k==0) {
            cout << "yes" << endl;
            cout << k + 1 << " " << n;
        }
        else cout<<"no"<<endl;
    }
    else {
        if (a[k] <= a[i + 1]) {
            int m = i;
            while (i < n - 1 && a[i] <= a[i + 1])
                i++;
            if (i == n - 1) {
                cout << "yes" << endl;
                cout << k + 1 << " " << m + 1;
            } else
                cout << "no" << endl;
        } else
            cout << "no" << endl;
    }
    return 0;
}
