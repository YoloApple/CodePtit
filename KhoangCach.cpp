#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double z;
    z=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    cout<<setprecision(4)<<fixed<<z<<endl;
    }
    return 0;
}