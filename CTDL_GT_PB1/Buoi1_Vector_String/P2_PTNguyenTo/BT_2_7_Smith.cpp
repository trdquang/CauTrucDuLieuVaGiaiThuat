#include <bits/stdc++.h>
using namespace std;

int tinh_tong(int n){
	int r = 0;
	while(n){
		r += n%10;
		n/=10;
	}
	return r;
}

int ktra_smith(int n){
	int res = tinh_tong(n);
	int ok = 0, sum = 0;;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		if(n % i == 0){
			while(n % i == 0){
				sum += tinh_tong(i);
				cnt++;
				n/=i;
			}
		}
		if(cnt >= 2)
			ok = 1;
	}
	if(n > 1)
		sum += tinh_tong(n);
	if(ok == 1 && (res == sum))
		return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(ktra_smith(n) == 1)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}