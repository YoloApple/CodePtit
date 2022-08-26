#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int &x:a)
    {
        cin>>x;
    }
    for(int i=0;i<n;i++)
    {
        int x= a[i];
        int j=i-1;
        while(j>=0 &&a[j]>x)
        {
            a[j+1]= a[j];
            j=j-1;
        }
        a[j+1]=x;
        cout<<"Buoc "<<i<<": ";
        for(int s=0;s<=i;s++)
        {
            cout<<a[s]<<" ";
        }
        cout<<endl;
    }
    return 0;
}