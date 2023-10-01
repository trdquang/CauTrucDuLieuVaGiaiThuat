#include <bits/stdc++.h>
using namespace std;

int ktra_tn(long long n){
	long long tmp = n;
	long long res = 0;
	while(n){
		res = res * 10 + n% 10;
		n /= 10;
	}
	return (res == tmp);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(ktra_tn(n))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}