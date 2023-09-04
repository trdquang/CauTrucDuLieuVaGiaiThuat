#include <bits/stdc++.h>
using namespace std;

//int MOD = 1000000001;

long long tinh_lt(int x, int y, int MOD){
	long long res = 1;
	while(y){
		if(y % 2 == 1){
			res *= x;
			res %= MOD;
		}
		y/=2;
		x *= x;
		x %= MOD;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	int x, y, MOD;
	while(t--){
		cin >> x >> y >> MOD;
		cout << tinh_lt(x, y, MOD) << endl;
	}
}