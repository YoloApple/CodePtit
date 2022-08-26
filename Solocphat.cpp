#include <iostream>
using namespace std;
bool check(int n) {
 while(n > 0) {
  int t = n % 10;
  if (t != 0 && t != 6 && t != 8)
   return false;
  n = n / 10;
 }
 return true;
}
int main() {
    int n;
    int t;
    cin>>t;
    while(t--){
        cin >> n ;
        if(check(n))
        cout << "YES"<<endl;
        else  
        cout << "NO"<<endl;
    }
    return 0;
}