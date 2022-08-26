#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string ma,ten,lop,email;
	public:
		SinhVien()
		{
			ma=ten=lop=email="";
		}
		bool operator < (SinhVien another)
		{
			return this->ma <another.ma;
		}
		friend ostream& operator << (ostream& ,SinhVien);
		friend istream& operator >> (istream& ,SinhVien&);
		string getLop()
		{
			return this->lop;
		}
};
ostream& operator << (ostream& out,SinhVien a)
{
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	return out;
}
istream& operator >> (istream& in, SinhVien& a)
{
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop>>a.email;
	return in;
}
int main()
{
	int n;
	cin>>n;
	SinhVien a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN LOP "<<s<<endl;
		for(SinhVien x : a)
		{
			if(x.getLop()==s)
			{
				cout<<x;
			}
		}
	}
}

