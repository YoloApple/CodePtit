#include<bits/stdc++.h>
using namespace std;
void chuanHoa(string &s)
{
    s[0]=toupper(s[0]);
    for(int i=1;i<s.size();i++)
    {
        s[i]= tolower(s[i]);
    }
}
void vietHoa(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]= toupper(s[i]);
    }
}
int main()
{
        
        map<string,int> mp;
        string s;
        getline(cin,s);
        vector<string>v;
        stringstream ss(s);
        string tmp;
        string res= "";
        while(ss>>tmp) v.push_back(tmp);
        for(int i=0;i<v.size()-1;i++){
        chuanHoa(v[i]);
        cout<<v[i];
        if(i == v.size()-2)
        cout<<", ";
        else
        cout<<" ";
        }
        vietHoa(v[v.size()-1]);
        cout<<v[v.size()-1];
        cout<<endl;
        return 0;
}