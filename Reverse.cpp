#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long m;
    cin>>m;
    long long p=m;
    long long revert=0;
    while(m>0)
    {
        revert=10*revert+m%10;
        m=m/10;
    }
    
    if(revert==p)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;  
}