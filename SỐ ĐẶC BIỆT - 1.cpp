#include<iostream>
using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}
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
    while(t--)
    {
        long long n;
        cin>>n;
        long long k=n;
        if (isPrime(sumS(n))){
        cout<<k<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}