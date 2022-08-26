#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        char a[200];
        fflush(stdin);
        gets(a);
        a[strlen(a)] = '\0';
        int dem=0;
        if(a[0] == ' ') 
        {
            for(int i=0; i < strlen(a)-1; i++)
            {
                if(a[i] == ' ' && a[i+1] != ' ') dem++;
            }
        }
        else
        {
            dem=1;
            for(int i=0; i < strlen(a)-1; i++)
            {
                if(a[i] == ' ' && a[i+1] != ' ') dem++;
            }
        }
        printf("%d\n",dem);
    }
    return 0;
}
/*
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        char a[200];
        fflush(stdin);
        gets(a);
        a[strlen(a)] = '\0';
        int dem=0;
        if(a[0] == ' ') 
        {
            for(int i=0; i < strlen(a)-1; i++)
            {
                if(a[i] == ' ' && a[i+1] != ' ') dem++;
            }
        }
        else
        {
            dem=1;
            for(int i=0; i < strlen(a)-1; i++)
            {
                if(a[i] == ' ' && a[i+1] != ' ') dem++;
            }
        }
        cout<<dem<<endl;
    }
    return 0;
}
*/