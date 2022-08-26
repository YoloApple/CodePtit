// MIN DIFF
/*
#include<iostream>
#include<algorithm>
using namespace std;
void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void minDif(int a[],int n)
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
    int a[n];  
    inputArr(a,n); 
    sort(a,a+n);
    minDif(a,n);
    cout<<endl;
    }
    return 0;
}
*/
// MAX DIFF
#include<bits/stdc++.h>
using namespace std;
int Solution(int a[],int n)
    {
        int max_diff=a[0]-a[1];
        int min_element= a[0];
        for(int i=1;i<n;i++){
            if(a[i]-min_element>max_diff)
            max_diff=a[i]-min_element;
            if(a[i]<min_element){
                min_element=a[i];
            }
        }
        if(max_diff<2) return -1;
        return max_diff;
    }
    void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
    int main()
    {
        int t;
        cin>>t;
        int n;
        while(t--)
        {
            cin>>n;
            int a[n];
            inputArr(a,n);
            cout<<Solution(a,n)<<endl;
        }
        return 0;
    }
    