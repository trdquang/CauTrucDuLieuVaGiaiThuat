#include <bits/stdc++.h>
using namespace std;

int ktra_sphenic(int n){
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		int c = 0;
		if(n % i == 0){
			dem++;
			while(n % i == 0){
				n/=i;
				c++;
			}
			if(c > 1)
				return 0;
		}
	}
	if(n > 1)
		dem ++;
	return (dem == 3);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ktra_sphenic(n) << endl;
	}
}