#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int count=0;
    if(n<2){
        cout<<"NO"<<endl;
    }
    for(int i=2;i<=sqrt(n);i++)
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