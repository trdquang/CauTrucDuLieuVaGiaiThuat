#include <bits/stdc++.h>
using namespace std;

int dem_uoc(int n){
	int res = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0)
			res += 2;
	}
	if(sqrt(n) == (int)sqrt(n))
		res--;
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