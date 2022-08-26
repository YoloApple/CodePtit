#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[50], s=0, i=0;
	arr[2]=20000;
	arr[5]=10000;
	arr[7]=15000;
	arr[29]=50000;
	arr[45]=70000;
	map<string, long> m;
	string b[100];
	int n;
	cin >> n;
	while(n--){
		int t, kt=1;
		string day;
		cin >> day;
		cin >> day;
		cin >> t;
		cin >> day;
		if(day=="OUT"){
			kt=0;
		}
		cin >> day;
		if(kt==1)	m[day]+=arr[t];
		if(s<m.size()){
			b[i++]=day;
			s=m.size();
		}
	}
	for(int j=0; j<i; j++){
		cout << b[j] <<": "<<m[b[j]]<<endl;
	}
}   