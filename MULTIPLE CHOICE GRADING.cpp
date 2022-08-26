#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;

int main ()
{
	int test;
	cin >> test;
	while (test--){
		int n;
		char a[16] = "ABBADCCABDCCABD";
		char b[16] = "ACCABCDDBBCDDBB";
		char c[16];
		cin >> n;
		for (int p=0; p<15; p++){
			cin >> c[p];
		}
		int dem=0;
		if (n == 101){
			for (int i=0; i<15; i++){
				if (a[i]==c[i]){
					dem++;
				}
			}
		}
		if (n == 102){
			for (int t=0; t<15; t++){
				if (b[t]==c[t]){
					dem++;
				}
			}
		}

		cout << fixed << setprecision(2) << (float)dem*10/15 << endl;
		cout << "\n";
	}
system("pause");
return 0;
}