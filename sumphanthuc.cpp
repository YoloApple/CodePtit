//Tong Phan Thuc

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int n;
    cin>>n;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(double)1/i;
    }
    cout<<setprecision(4)<<fixed<<sum;
    return 0;
}

// Tong Giai Thua
/*
#include <iostream>
using namespace std;

int main ()
{
int n;
cin >> n;
long long s = 0;
long long p=1;
for (int i =1; i<=n; i++)
{
        p=p*i;
        s=s+p;
}
cout << s <<endl;
return 0;
}*/