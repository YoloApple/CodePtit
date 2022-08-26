#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int count=0;
    if(n<2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    return 0;
}