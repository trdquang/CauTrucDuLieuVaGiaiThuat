#include <bits/stdc++.h>
using namespace std;

int ktra_tn(int n){
	int tmp = n, res = 0;
	while(n){
		res = res * 10 + n % 10;
		n /= 10;
	}
	return (tmp == res );
}

int ktra_lp(int n){
	int sum = 0;
	int ok = 0;
	while(n){
		if(n % 10 == 6)
			ok = 1;
		sum += n % 10;
		n /= 10;
	}
	return (sum % 10 == 8 && ok);
}

int main(){
	int l, r;
	cin >> l >> r;
	
	for(int i = l; i <= r; i++){
		if(ktra_tn(i) && ktra_lp(i)){
			cout << i << " ";
		}
	}

}