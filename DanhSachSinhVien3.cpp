#include <bits/stdc++.h>
using namespace std;
 
string chuan(string name){
	stringstream ss(name);
	string res = "";
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++) res += tolower(token[i]);
		res += " ";
	}
	res.erase(res.length() - 1);
	return res;
}
 
 
class SinhVien{
	public:
		string ma, ten, lop, ns;
		double gpa;
		static int cnt;
	public:
		SinhVien(){
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend bool operator < (SinhVien a, SinhVien b){
			return a.gpa < b.gpa;
		}
		friend ostream& operator << (ostream& out, const SinhVien a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
			return out;
		}
		friend istream& operator >> (istream& in, SinhVien &a){
			++cnt;
			string tmp = to_string(cnt);
			tmp = string(3 - tmp.size(), '0') + tmp;
			a.ma = "B20DCCN" + tmp;
			scanf("\n");
			getline(in, a.ten);
			a.ten = chuan(a.ten);
			getline(in, a.lop);
			getline(in, a.ns);
			in >> a.gpa;
			if(a.ns[2] != '/') a.ns = "0" + a.ns;
			if(a.ns[5] != '/') a.ns.insert(3, "0");
			return in;
		}
};
int SinhVien::cnt = 0;
 
 
void sapxep(SinhVien a[], int n){
	sort(a, a + n);
	reverse(a, a + n);
}
 
 
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}