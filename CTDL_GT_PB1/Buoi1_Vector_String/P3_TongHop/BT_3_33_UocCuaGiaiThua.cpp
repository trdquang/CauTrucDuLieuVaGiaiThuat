#include <bits/stdc++.h>
using namespace std;

//tim bac cua p trong n!
int tim_bac(int p, int n){
	int res = 0;
	for(int i = p; i <= n; i*=p)
		res += n/i;
	return res;
}

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

long long dem_uoc(int n){
	long long res = 1;
	for(int i = 2; i <= n; i++){
		if(ktra_nt(i)){
			res *= (tim_bac(i, n) + 1);
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dem_uoc(n) << endl;
	}
}