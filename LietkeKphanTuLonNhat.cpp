#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sortArrGiam(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                swap(a[i], a[j]);
            }
        }
}
void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void Sol(int a[],int k)
{
    int n;
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    int t;
    int k;
    cin>>t;
    while(t--)
    {
    do{   
        cin>>n;
        cin>>k;
    }
    while(n<=0);  
    int a[n];  
    inputArr(a,n); 
    sortArrGiam(a, n);
    Sol(a,k);
    cout<<endl;
    }
    return 0;
}