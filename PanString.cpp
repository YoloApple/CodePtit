#include <bits/stdc++.h> 
using namespace std; 
int main()
{ 
    int t; 
    cin>>t; 
    cin.ignore(); 
    while(t--)
    { 
        string S; 
        getline(cin,S); 
        if(S.size()<26)
        { 
            cout<<0; 
            continue; 
        }else
        { 
            int K; 
            cin>>K; 
            int danhDau[128]; 
            for(int i='a';i<='z';i++)
            { 
                danhDau[i]=0; 
                
            } 
            for(int i=0;i<S.size();i++)
            { 
                for(int j='a';j<='z';j++)
                { if(S[i]==j)
                { danhDau[j]=1; } } } 
                int temp = 0; 
                for(int i='a';i<='z';i++)
                { 
                    if(danhDau[i]==0) temp++; 
                    
                } if(temp<=K)
                cout<<1; 
                else{ cout<<0; 
                    
                } 
            
        } cin.ignore(); 
        cout<<endl; 
        
    } 
    return 0; 
    
}