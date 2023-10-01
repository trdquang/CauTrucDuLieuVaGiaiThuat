#include <bits/stdc++.h>
using namespace std;

long long tim_du(string s, long long mod){
	long long res = 0;
	for(int i = 0; i < s.size(); i++){
		res = res * 10 +(s[i] - '0');
		res %= mod;
	}
	return res;
}

long long lt(long long x, long long y, long long mod){
	long long res = 1;
	while(y){
		if(y % 2 == 1){
			res *= x;
			res %= mod;
		}
		y /= 2;
		x *= x;
		x %= mod;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		long long y, mod;
		getline(cin, s);
		cin >> y >> mod;
		cin.ignore();
		cout << lt(tim_du(s, mod), y, mod) << endl;
	}
}
/*
1
3 
2 4
*/