#include <bits/stdc++.h>

using namespace std;

vector <int> sang_doan(int l, int r){
	vector <int> v(r-l+1, 1);
	for(int i = 2; i <= sqrt(r); i++){
		if(v[i] == 1){
			for(int j = max(i*i, (l+i-1)/i*i); j<= r;j+=i){
				v[j-l]  = 0;
			}
		}
	}
	return v;
}

int main(){
	int l, r;
	cin >> l >> r;
	vector <int> v = sang_doan(l, r);
	for(int i = max(2, l); i <= r; i++){
		if(v[i-l] == 1){
			cout << i << " ";
		}
	}
}