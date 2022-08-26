#include<bits/stdc++.h> 
using namespace std; 
int Solution(string str) { 
    int n = str.length();
 
    int S1 = 0;
	int S2 = 0; 
    for (int i=0; i<n; i++)  {         
        if (i%2 == 0) 
            S1 += (str[i]-'0'); 
        else 
            S2 += (str[i]-'0');
    }       

    return ((S1 - S2) % 11 == 0); 
} 

int main() { 
    string str; int T; cin>>T;
    while(T--){
    	cin>>str;
    	cout<<Solution(str)<<endl;
	}
} 