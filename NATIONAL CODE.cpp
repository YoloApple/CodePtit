#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[20];
        cin>>s;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='0'){
                if(s[i+1]=='8')
                    if(s[i+2]=='4'){
                        s[i]='a';
                        s[i+1]='a';
                        s[i+2]='a';
                    }
            }
        }
     
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')continue;
        cout<<s[i];
    }
    cout<<"\n";
    }
    return 0;
}