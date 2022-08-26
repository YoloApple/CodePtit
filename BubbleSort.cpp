#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        bool ok=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                ok = true;
            }
            
        }
        if(ok)
        {
            cout<<"Buoc "<< i+1 <<": ";
            for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
        }
        else break;
    }
}