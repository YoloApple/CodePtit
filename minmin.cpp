#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void sortArrTang(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
}
void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void maxElement(int a[],int n){
    if(a[n-1]==a[0]){
        cout<<"-1";
    }
    else{
        cout<<a[0]<<" "<<a[1];
    }
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
    int a[n];  
    inputArr(a,n); 
    sortArrTang(a, n);
    maxElement(a,n);
    cout<<endl;
    }
    return 0;
}