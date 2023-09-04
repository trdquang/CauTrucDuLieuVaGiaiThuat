//dem so luong bit nhi phan voi do dai n cho truoc

#include <bits/stdc++.h>
using namespace std;

int MOD = 1000000007;

int tinh_lt(long long a, int n){
	int res = 1;
	while(n){
		if(n % 2 == 1){
			res *= a;
			res %= MOD; 
		}
		n /= 2;
		a *= a;
		a%=MOD;
	}
	return res;
}

int main(){
	int n;
	cin >> n;
	cout << tinh_lt(2, n);
}