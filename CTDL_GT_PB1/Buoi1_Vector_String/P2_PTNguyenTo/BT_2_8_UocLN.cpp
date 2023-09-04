#include <bits/stdc++.h>
using namespace std;

int tim_ln(int n){
	int res = -1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				res = i;
				n /=i;
			}
		}
	}
	if(n > res)
		res = n;
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << tim_ln(n) << endl;
	}
}