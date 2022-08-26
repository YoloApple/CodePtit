#include<iostream>
using namespace std;
int bs(int a[],int n,int x)
{
    int l=0,r=n-1;
    int m=(l+r)/2;
    while(l<=r)
    {
         if(a[m]<x)
        {
            l=m+1;
        }
        else if(a[m]>x)
        {
            r=m+1;
        }
        else{
            return 1;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int &x : a)
    {
    cin>>x;
    }
    cout<<bs(a,n,x)<<endl;
    }
    return 0;
}