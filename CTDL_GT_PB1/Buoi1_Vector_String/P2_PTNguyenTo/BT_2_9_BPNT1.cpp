#include <bits/stdc++.h>
using namespace std;

int ktra(int n){
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		while(n % i == 0){
			n/=i;
			cnt ++;
		}
		if(cnt >=2)
			return 1;
	}
	return 0;
}

int main(){
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(ktra(i))
			cout << i << " ";
}