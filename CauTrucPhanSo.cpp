//CauTrucPhanSo
/*
#include<bits/stdc++.h>
#include<numeric>
using namespace std;
struct PhanSo
{
    long long a,b;
};
long long gcd(long long a, long long b) {
  while (b != 0)  {
    long long t = b;
    b = a % b;
    a = t;
  }
  return a;
}
void nhap(PhanSo &p)
{
    cin>>p.a>>p.b;
}
void rutgon(PhanSo &p)
{
    long long l=gcd(p.a,p.b);
    p.a/=l;
    p.b/=l;
}

void in(PhanSo p)
{
    cout<<p.a<<"/"<<p.b<<endl;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

*/

//Tong PhanSo (Struct)
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct PhanSo
{
    long long a,b;
};
long long gcd(long long a, long long b) {
  while (b != 0)  {
    long long t = b;
    b = a % b;
    a = t;
  }
  return a;
}
ll lcm(ll a, ll b)
{
    return a/gcd(a,b)*b;
}
void nhap(PhanSo &p)
{
    cin>>p.a>>p.b;
}
void rutgon(PhanSo &p)
{
    long long l=gcd(p.a,p.b);
    p.a/=l;
    p.b/=l;
}

void in(PhanSo p)
{
    cout<<p.a<<"/"<<p.b<<endl;
}
PhanSo tong(PhanSo a,PhanSo b)
{
    long long mc = lcm(a.b,b.b);
    a.a=mc/a.b*a.a;
    b.a=mc/b.b*b.a;
    a.a+=b.a;
    a.b=mc;
    rutgon(a);
    return a;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}