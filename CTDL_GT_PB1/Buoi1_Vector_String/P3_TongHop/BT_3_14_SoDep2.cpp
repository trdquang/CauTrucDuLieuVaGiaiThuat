#include <bits/stdc++.h>
using namespace std;

int ktra_tn(int n){
	int tmp = n, res = 0;
	while(n){
		res =res * 10 + n%10;
		n /= 10;
	}
	return (tmp == res);
}

int dem_uoc(int n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			cnt ++;
			while(n % i == 0)
				n /= i;
		}
	}
	if(n > 1)
		cnt++;
	return (cnt >= 3);
}

int main(){
	int l, r;
	cin >> l >> r;
	int cnt = 0;
	for(int i =l; i <= r; i++){
		if(ktra_tn(i) && dem_uoc(i)){
			cnt ++;
			cout << i << " ";
		}
	}
	if(cnt == 0)
		cout << -1;
}