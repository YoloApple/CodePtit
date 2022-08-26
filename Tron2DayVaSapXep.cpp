#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std; 
void Nhap_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void Xuat_Mang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout <<a[i]<<" ";
	}
}
void Xu_Li(int a[], int b[], int c[], int n, int m, int &k)
{
	int i = 0; 
	int j = 0; 
	while((i < n) && (j < m))
	{
		if(a[i] < b[j])
		{
			c[k] = a[i];
			k++; 
			i++;
		}
		else 
		{
			c[k] = b[j];
			k++; 
			j++;
		}
	}
	for(; i < n; i++)
	{
		c[k] = a[i];
		k++;
	}
	for(; j < m; j++)
	{
		c[k] = b[j];
		k++;
	}
}


int main()
{
	int a[100];
	int b[100];
	int c[200];
	int n;
	int m;
	int k = 0;
    int test;
    cin>>test;
    while(test--)
    {
	cin >> n;
	cin >> m;
	Nhap_Mang(a, n);
	Nhap_Mang(b, m);
	Xu_Li(a, b, c, n , m, k);
	
    sort(c,c+k);
    Xuat_Mang(c, k);
    }
	return 0;
}