#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            s[i]='0';
            continue;
        }
        if(s[i]=='e')
        {
            s[i]='0';
            continue;
        }
        if(s[i]=='u')
        {
            s[i]='0';
            continue;
        }
        if(s[i]=='o')
        {
            s[i]='0';
            continue;
        }if(s[i]=='i')
        {
            s[i]='0';
            continue;
        }
        if(s[i]=='y')
        {
            s[i]='0';
            continue;
        }
        else
        {
            cout<<"."<<s[i];
        }
    }
    return 0;
}