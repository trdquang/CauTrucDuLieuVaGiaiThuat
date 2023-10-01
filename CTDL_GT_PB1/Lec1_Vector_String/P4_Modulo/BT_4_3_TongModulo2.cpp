#include <bits/stdc++.h>
using namespace std;

long long tinh_tong(long long n, long long k){
	long long res = n/k * (k - 1)*k/2 +
				(n %k)*(n%k + 1)/2;
	return (res == k);
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