
#include <bits/stdc++.h>
using namespace std;
 

void perfectSquares(float l, float r)
{
 int sum = 0;
  
    for (int i = l; i <= r; i++) {
        
      
        if (sqrt(i) == (int)sqrt(i))
        
            sum = sum+i;
             
    }
    cout << sum;
}
 

int main()
{
    int l,r;
    cin >> l >> r;
    perfectSquares(l, r);
 
    return 0;
}