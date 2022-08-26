#include<iostream>
#include<algorithm>
using namespace std;
void inputArr(long long a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void minDif(long long a[],int n)
{
    int min=1000000;
    for(int i=0;i<n-1;i++)
    {
    int k=a[i+1]-a[i];
    if(k<min)
    {
        min=k;
    } 
    }
    cout<<min;
    
}
int main(){
    int n;
    int t;
    cin>>t;
    while(t--)
    {
    do{
        
        cin>>n;
    }
    while(n<=0);  
    long long a[n];  
    inputArr(a,n); 
    sort(a,a+n);
    minDif(a,n);
    cout<<endl;
    }
    return 0;
}