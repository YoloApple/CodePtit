#include <bits/stdc++.h>
using namespace std;
 
class SinhVien{
	private:
		string code, name, lop, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.code << " " << a.name << " " << a.lop << " " << a.email << endl;
			return out;
		}
 
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.code;
			in.ignore();
			getline(in, a.name);
			in >> a.lop >> a.email;
			return in;
		}
 
		friend bool operator < (SinhVien a, SinhVien b){
			if(a.lop != b.lop)
				return a.lop < b.lop;
			return a.code < b.code;
		}
};
 
 
int main(){
	int n; cin >> n;
	SinhVien a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(SinhVien x : a) cout << x;
	return 0;
}