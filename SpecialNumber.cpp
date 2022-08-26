#include<iostream> 
using namespace std;   

bool isPerfect(long long int n) 
{     
    long long int sum = 1;        
    for (long long int i=2; i*i<=n; i++) { 
        if (n%i==0) { 
            if(i*i!=n) 
                sum = sum + i + n/i; 
            else 
                sum=sum+i; 
        } 
    }  
    cout <<sum;
    if (sum == n && n != 1) 
          return true;    
     return false; 
} 

int main() { 
	long long int T, n; cin>>T;
	while(T--){
		cin>>n; cout<<isPerfect(n)<<endl;
	}
} 