#include<bits/stdc++.h>
#include<iostream>

using namespace std;
struct SinhVien
{
    string ma;
    string ten,lop,ns;
    float gpa;
};
void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    cin>> a.lop;
    cin>> a.ns;
    cin>> a.gpa;
    a.ma="B20DCCN001";
    string tmp="";
    if(a.ns[1]=='/')
    {
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
}
void in(SinhVien a)
{
    cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
// Cau truc sinh vien 2
/*
#include<bits/stdc++.h>
#include<iostream>

using namespace std;
struct SinhVien
{
    string ma;
    string ten,lop,ns;
    float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.ten);
    cin>> a.lop;
    cin>> a.ns;
    cin>> a.gpa;
    a.ma="N20DCCN001";
    string tmp="";
    if(a.ns[1]=='/')
    {
        a.ns="0"+a.ns;
    }
    if(a.ns[4]=='/'){
        a.ns.insert(3,"0");
    }
}
void inThongTinSV(SinhVien a)
{
    cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
*/