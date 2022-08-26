#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        double a=0;
        cin >> n;
        for (int i = 1;i<=n;i++ )
        {
        a= a+i;
        a= sqrt(a);

        }
         cout << fixed;
        cout << setprecision(5);
       cout << a << endl; 
    }
    return 0;
}