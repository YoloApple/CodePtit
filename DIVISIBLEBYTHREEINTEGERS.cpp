#include<iostream>
#include<algorithm>
#include<numeric>
#include<math.h>
#define ll long long

using namespace std;
ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
    return a/gcd(a,b)*b;
}
ll solve(int x,int y,int z,ll n)
{
    ll tmp= lcm(lcm(x,y),z);
    ll m=(ll)pow(10,n-1);
    ll res=(m + tmp-1)/tmp*tmp;
    if(res<(ll)pow(10,n))
    return res;
    else return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
    ll n;
    cin>> x >> y >> z>> n;
    cout<< solve(x,y,z,n)<<endl;
    }
    return 0;
}