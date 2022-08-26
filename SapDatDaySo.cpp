#include<iostream> 
#include<algorithm> 
using namespace std; 
int main()
{ 
    int t; 
    cin>>t; 
    while (t--){ 
        long n; cin>>n; 
        long long a[n]; 
        long long b[n]; 
        for (int i=0; i<n; i++){ 
            b[i]=-1; 
            } 
            for (int i=0; i<n; i++){ 
                cin>>a[i]; 
                } 
                sort(a,a+n); 
                for (int i=0; i<n; i++)
                { 
                    for (int j=0; j<n; j++){
                         if (a[j]==i){
                              b[i]=a[j]; 
                              } 
                              } 
                              } 
                              for (int i=0; i<n; i++)
                              { 
                                  cout<<b[i]<<" "; 
                                  } 
                                  cout<<endl; 
                                  } 
                                  return 0; 
                                  }

                                  /*
                                  Input:



2

10

-1 -1 6 1 9 3 2 -1 4 -1

6
0  -3  1  -2  3 - 4

Output:
-1 1 2 3 4 -1 6 -1 -1 9

0 1 -1 3 -1 -1
*/