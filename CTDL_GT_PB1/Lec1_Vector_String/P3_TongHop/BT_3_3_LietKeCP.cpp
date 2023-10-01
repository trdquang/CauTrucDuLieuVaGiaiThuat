#include <bits/stdc++.h>

using namespace std;



int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		for(int i = (ceil)(sqrt(l)); i <= sqrt(r); i++){
			cout << i*i <<" ";
		}
		cout << endl;
	}
}