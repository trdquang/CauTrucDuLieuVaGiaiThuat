#include <bits/stdc++.h>
using namespace std;

int ktra_cp(long long n){
	if((int)sqrt(n) == sqrt(n))
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(ktra_cp(n))
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}