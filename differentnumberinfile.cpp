#include<bits/stdc++.h> 
using namespace std;
// bool cmp(map<long long,long long> a,map<long long,long long> b){
//     return a.first < b.first;
// }
int main(){
    ifstream file;
    file.open("DATA.in");
    map<long long, long long> mp;
    long long a;
    while(file >> a){
        mp[a]++;
    }
    for(int i =0;i<mp.size();i++){
        if(mp[i]!=0){
            cout<<i<<" "<<mp[i]<<endl;
        }
    }

}