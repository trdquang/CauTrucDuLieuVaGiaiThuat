#include <bits/stdc++.h>
using namespace std;

/*
Uoc nho nhat cua so chan luon = 2.
2 lan so le cung la so chan
=> s(n-chan) = n + 2k
=> s(n_le) = n + f(n) + (k-1)2
*/

int tim_uoc(long long n){
	for(long i = 3; i <= n; i++)
		if(n % i == 0)
			return i;
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		if(n % 2 == 0)
			cout << n + k * 2 << endl;
		else
			cout << n + tim_uoc(n) + (k - 1) * 2 << endl;
	}	
}