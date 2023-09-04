#include <bits/stdc++.h>
using namespace std;

int tinh_tong_uoc(int n){
	int res = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			res = res + i + n/i;
		}
	}
	if(sqrt(n) == (int)sqrt(n))
		res -= sqrt(n);
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << tinh_tong_uoc(n) << endl;
	}
}