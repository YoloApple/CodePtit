#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000001];
int b[1000001];
int main()
{
    int t;
    
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int m1=*max_element(a,a+n);
        int m2=*min_element(b,b+m);
        cout<< 1ll *m1 *m2 <<endl;
    }
    return 0;
}