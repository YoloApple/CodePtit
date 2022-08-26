#include<iostream>
using namespace std;
void tong_chu_so( long long n )
{
    int so;
    int s = 0;
    for( ;n!=0;)
       {
          so=n%10;
          s+=so;
          n/=10;
       }
       if(n>10)
       return tong_chu_so();

}
int main()
{
    int t;
    cin>>t;
    long long n;
   while(t--)
   {
       cin>>n;     
   }
   cout<<tong_chu_so()<<endl;
   
}