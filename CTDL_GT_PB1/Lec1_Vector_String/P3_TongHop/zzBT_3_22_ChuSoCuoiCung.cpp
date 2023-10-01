#include <bits/stdc++.h>
using namespace std;

int ktra_so(int n){
	int x = n % 10;
	n /= 10;
	while(n){
		if(n % 10 > x)
			return 0;
			n /= 10;
	}
	return 1;
}

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

int main(){
	int n, cnt = 0;
	cin >> n;
	for(int i = 2; i < n; i++){
		if(ktra_so(i) && ktra_nt(i)){
			cout << i << " ";
			cnt++;
		}
	}
	if(cnt == 0)
		cout << cnt;
	else
		cout << endl << cnt;
}