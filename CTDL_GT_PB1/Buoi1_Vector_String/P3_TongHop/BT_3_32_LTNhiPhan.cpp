#include <bits/stdc++.h>
using namespace std;

long long tinh_lt_lap(int a, int b){
	int res = 1;
	while(b){
		if(b % 2 == 1)
			res *= a;
		a*=a;
		b/=2;
	}
	return res;
}

long long tinh_lt_dq(int a, int b){
	if(b == 0)
		return 1;
	long long x = tinh_lt_dq(a, b/2);
	if(b % 2 == 1)
		return x * x * a;
	else
		return x * x;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << tinh_lt_lap(a, b) << " ";
		cout << tinh_lt_dq(a, b) << endl;
	}
}