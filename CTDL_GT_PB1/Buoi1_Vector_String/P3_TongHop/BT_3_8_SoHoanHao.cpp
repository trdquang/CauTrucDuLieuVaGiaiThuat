#include <bits/stdc++.h>
using namespace std;

int ktra_nt(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

vector <long long> init_hh(){
	vector <long long>v;
	for(int i = 2; i <= 32; i++){
		if(ktra_nt(i) && ktra_nt(pow(2, i)-1))
			v.push_back( pow(2, i-1)*(pow(2, i)-1) );
	}
	return v;
}

int main(){
	vector <long long> v = init_hh();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		int ok = 0;
		for(int i = 0; i < v.size(); i++){
			if(v[i] == n){
				ok = 1;
				break;
			}
			if(v[i] >= n)
				break;
		}
		if(ok)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
}