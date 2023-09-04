#include <bits/stdc++.h>
using namespace std;

int tinh_tong(long long n, long long k){
	long long x = n/k;
	long long y = n%k;
	return k*(k-1)/2 * x + y*(y+1)/2;
}

int main(){
	int t;
	cin >> t;
	long long n, k;
	while(t--){
		cin >> n >> k;
		cout << tinh_tong(n, k) << endl;
	}
	
}