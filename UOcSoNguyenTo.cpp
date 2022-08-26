#include <iostream> 
#include <math.h> 
using namespace std; 
int SNT(long long n) 
{ 
    if(n < 2) 
    return 0; 
    for(long long i = 2; i <= sqrt(n); i++) 
    { if(n%i==0) 
    return 0; 
        
    } return 1; 
    
} 
int main() 
{ int t; 
long long n; 
cin >> t; 
while(t--) 
{ 
    cin >> n; 
    if(SNT(n)) 
    cout << n; 
    else for(long long i = 2; i <= sqrt(n); i++) 
    { 
        while(n%i==0 && SNT(i)) 
        { cout << i << " "; 
        if(i != n/i && SNT(n/i)) 
        cout << n/i << " "; 
        n/=i; 
            
        } 
        
    } cout << endl; 
    
} 
    
}
int soNgto(int a) 
{ 
    if(a<2) 
    return 0; 
    for(int i=2;i<=sqrt(a);i++)
    { 
        if(a%i==0) 
        return 0; 
        } return 1; 
} 
int main()
{ 
    int a; 
    cin >> a ;
     while(a--)
     { 
         int n; 
         cin>>n; 
         int check = 0; 
         for(int i=2;i<=n/2;i++)
         { 
             if(soNgto(i)&&soNgto(n-i))
             { 
                 cout << i << " " << n-i<<endl; 
                 check =1; 
                 break; 
                 } 
                 } if(check == 0 ) 
                 { 
                     cout << "-1\n"; 
                     } 
                     } 
                     }

 #include <bits/stdc++.h>
const int MAX = 100000; 
using namespace std;  
bool Prime[MAX]; 
void Eratosthenes(void) {         
	memset(Prime, true, sizeof(Prime));  
	Prime[0]=false; Prime[1]=false;
    for (int p=2; p*p<=MAX; p++) { 
        if (Prime[p] == true){ 
            for (int i=p*p; i<=MAX; i += p) 
                Prime[i] = false; 
        } 
    } 
}  
void Result(int m, int n){
    if(m<n){
	for(int i=m; i<=n; i++){
		if(Prime[i]) cout<<i<<" ";
	}
	cout<<endl;
    }
    else{
        for(int i=n; i<=m; i++){
		if(Prime[i]) cout<<i<<" ";
	}
	cout<<endl;
    }
}
int main(void){
	int m,n;
     Eratosthenes();	
		cin>>m>>n;
		Result(m,n);
        return 0;
}