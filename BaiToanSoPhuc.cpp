#include<bits/stdc++.h>
using namespace std;

struct SoPhuc {
	int th;
	int ao;
};

SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B) {
	A.th+=B.th;
	A.ao+=B.ao;
	B.th=A.th;
	A.th*=A.th;
	A.th+=A.ao*A.ao*-1;
	A.ao=2*B.th*A.ao;
	return A;
}

void hien_thi(SoPhuc A){
	cout << A.th <<" + "<< A.ao << "i"<<endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.th >> A.ao >> B.th >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}