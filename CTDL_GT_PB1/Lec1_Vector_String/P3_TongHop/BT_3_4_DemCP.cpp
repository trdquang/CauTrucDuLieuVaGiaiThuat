#include <bits/stdc++.h>
using namespace std;

int ktra_cp(int n){
	if(sqrt(n) == (int)sqrt(n))
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		int cd = ceil(sqrt(l));
		cout << (int)sqrt(r)  - cd + 1;
		cout << endl;
	}
}