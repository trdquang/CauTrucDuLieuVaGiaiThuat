#include <bits/stdc++.h>
using namespace std;

int ktra(int n){
	int tmp = n;
	for(int i = 2; i <= sqrt(n); i++){
		int cnt = 0;
		if(n % i == 0){
			while(n % i == 0){
				cnt++;
				n/=i;
			}
			if(cnt < 2)
				return 0;
		}
	}
	if(n > 1)
		return 0;
	if(n == tmp)
		return 0;
	return 1;
}

int main(){
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(ktra(i))
			cout << i << " ";
}