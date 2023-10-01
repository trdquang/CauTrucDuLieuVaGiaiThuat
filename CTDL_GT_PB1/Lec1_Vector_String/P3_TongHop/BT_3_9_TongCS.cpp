#include <bits/stdc++.h>
using namespace std;

int tinh_tong(long long n){
	int s = 0;
	while(n){
		s += n%10;
		n /= 10;
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << tinh_tong(n) << endl;
	}
}