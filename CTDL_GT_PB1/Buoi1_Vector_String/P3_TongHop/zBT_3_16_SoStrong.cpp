#include <bits/stdc++.h>
using namespace std;

int tinh_gt(int n){
	if(n == 0)
		return 1;
	return tinh_gt(n - 1) * n;
}

int ktra_strong(int n){
	int tmp = n, res = 0;
	while(n){
		res += tinh_gt(n % 10);
		n /= 10;
	}
	return (res == tmp);
}

int main(){
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	
	for(int i = l; i <= r; i++){
		if(ktra_strong(i)){
			cout << i << " ";
			cnt++;
		}
	}
	if(cnt == 0)
		cout << 0;
}