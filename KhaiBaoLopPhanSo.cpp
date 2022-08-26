#include <bits/stdc++.h>
using namespace std;
 
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(){
 
		}
		PhanSo(int tu, int mau){
			this->tu = tu;
			this->mau = mau;
		}
 
		void rutgon(){
			ll g = gcd(abs(this->tu), abs(this->mau));
			this->tu /= g;
			this->mau /= g;
		}
		friend ostream& operator << (ostream& out,const PhanSo a){
			out << a.tu << "/" << a.mau << endl;
			return out;
		}
		friend istream& operator >> (istream& in, PhanSo& a){
			in >> a.tu >> a.mau;
			return in;
		}
};
 
 
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
