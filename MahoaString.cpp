#include<iostream>
#include<string> 
using namespace std; 
int mahoa(string xau) 
{ 
    int arr = xau[0]; 
    int len = xau.length(); 
    int count = 1; 
    for (int i = 0; i < len; i++) 
    { 
        if (xau[i] == xau[i + 1]) { 
            count++; 
            } else 
            { 
                cout<<xau[i]<<count; 
                count = 1; 
                } 
                } 
                return 0; 
                
                } 
                int main() 
                { 
                    int t;
                    cin>>t; 
                    cin.ignore(); 
                    while (t--) { 
                        string arr; 
                        getline(cin,arr); 
                        mahoa(arr); 
                        cout<<endl; 
                        } 
                }