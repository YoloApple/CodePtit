#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int temp;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        for(int i=0;i<=n;i++)
        {
            temp=temp+i%k;
        }
        if(temp==k)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }

 return 0;
}