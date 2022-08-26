#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name;
    string date;
    float a,b,c;
};
void nhap(ThiSinh &a){
    getline(cin,a.name);
    cin>>a.date;
    cin>>a.a>>a.b>>a.c;
}
void in(ThiSinh a){
    cout<<a.name<<" "<<a.date<<" "<<fixed<<setprecision(1)<<(a.a+a.b+a.c)<<endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}