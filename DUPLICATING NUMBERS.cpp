#include <iostream>
#include<math.h>
using namespace std;
long long gCd(long long u, long long v) {
    while (v != 0) {
        long long r = u % v;
        u = v;
        v = r;
    }
    return u;
}
long long soPq(long long a,long long x)
    {
      long long s=0;
    for(long long i=x;i>0;i--){
        s+=a*pow(10,i-1);

    }
    return s;
    }
int main()
{   int t;
    cin>>t;
    
    long long a,x,y;
    while(t--){
    cin>>a>>x>>y;
    cout<<gCd(soPq(a,x),soPq(a,y))<<endl;
    }
    return 0;
}