#include <bits/stdc++.h> 
typedef long long int ll;
using namespace std;   
void Solution(ll n) { 	

    while (n % 2 == 0){  
        cout << 2 << " ";  
        n = n/2;          
    }    
  
    for (ll i = 3; i <= sqrt(n); i = i + 2) {  
        while (n % i == 0){  
            cout << i << " ";  
            n = n/i;              
        }  
    }
    if ( n>2 )  
        cout << n << " "<<endl;              
}  

int main(void){  
	ll  n;
    int t;
    cin>>t;
	while(t--){
		cin>>n; 
        Solution(n);
	}
} 