#include<bits/stdc++.h> 
using namespace std;
int a[1000000];  
int main()
{ 
    int t; 
    int n,d;
    cin>>t; 
    while(t--)
    { 
        cin>>n>>d; 
        for(int i=0;i<n;i++)
        { 
            cin>>a[i]; 
            }
            for(int j=d;j<n;j++)
            { 
                cout<<a[j]<<" "; 
                } 
                for(int u=0;u<d;u++)
                { 
                    cout<<a[u]<<" "; 
                    } 
                    cout<<endl; 
                    } 
                    return 0; 
}

