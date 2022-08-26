#include<iostream>
using namespace std;
long long sumS(long long n)
{
    long long s=0;
    long long temp;
    
    for(;n!=0;)
    {
        temp=n%10;
        s+=temp;
        n/=10;
    }
    return s;
}
int main()
{   
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        if(sumS(n)<10)
        {
            cout<< sumS(n)<<endl;
        }
        else{
            cout<<sumS(sumS(sumS(n)))<<endl;
        }
    }
    return 0;
}