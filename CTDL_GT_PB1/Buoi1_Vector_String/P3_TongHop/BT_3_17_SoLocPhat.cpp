#include <bits/stdc++.h>
using namespace std;

int ktra_lp(int n){
	while(n){
		int r = n % 10;
		while(!(r == 0 || r == 6 || r == 8))
			return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	cout << ktra_lp(n);
}