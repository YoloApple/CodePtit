

/*#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{   
    long long a,b;
    cin>>a>>b;
    int count=0;
    int s;
    if(a<b){
    for(int i=a;i<=b;i++)
    {
        if(b%i==0)
        count++;
        s=count;
    }
    }
    else{
        for(int i=b;i<=a;i++)
    {
        if(a%i==0)
        count++;
        s=count;
    }
    }
    cout<<s<<endl;
    return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;

long long n,m;

void input(){
 cin >> n >> m;
}

bool nto(int x){
 if(x < 2) return false;
 for(int i = 2; i <= sqrt(x); i++)
  if(x%i==0)
  return false;
 return true;
}

bool ktra(int x){
 int tong = 0;
 bool cs = true;
 while(x > 0){
  int t = x % 10;
  if(t != 2 && t != 3 && t != 5 && t != 7)
   cs = false;
  tong = tong + t;
  x = x / 10;
 }
 if(nto(tong) && cs == true)
  return true;
 return false;
 }


int main(){
    int t;
    cin>>t;
    while(t--){
 input();
 int dem = 0;
 if( n >= m ){
  for(int i = m; i <= n; i++){
   if( ktra(i) && nto(i) )
   dem++;
  }
   cout <<dem<<endl;
 }
 else{
  for(int i = n; i <= m; i++){
   if( ktra(i) && nto(i) )
   dem++;
  }
   cout <<dem<<endl;
 }
    }
}