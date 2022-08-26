#include<bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string ma="00001";
    string name,gt,ns,dc,mst,date;
};
void nhap(NhanVien &a)
{
    getline(cin,a.name);
    cin>>a.gt>>a.ns;
    cin.ignore();
    getline(cin,a.dc);
    cin>>a.mst>>a.date;
}
void in(NhanVien a)
{
    cout<<a.ma<<" "<<a.name<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.date<<endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}