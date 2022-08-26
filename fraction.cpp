#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x,y;
        x=(a*d+c*b)*(a*d+c*b);
        y=(b*d)*(b*d);
        long long u= __gcd(x,y);
        long long x1,y1;
        x1=x/u;
        y1=y/u;
        long long x2,y2;
        x2=a*c*x1;
        y2=b*d*y1;
        long long u1=__gcd(x2,y2);
        x2=x2/u1;
        y2=y2/u1;
        cout<<x1<<"/"<<y1<<" "<<x2<<"/"<<y2<<endl;

    }
    return 0;
}