#include <bits/stdc++.h>
using namespace std;

vector <int> sang_nt(int n){
	vector<int>v(1000001, 1);
	v[0] = 0;
	v[1] = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(v[i] == 1){
			for(int j = i*i; j <= n; j+=i){
				v[j] = 0;
			}
		}
	}
	return v;
}

int main(){
	int n;
	cin >> n;
	vector <int>v = sang_nt(n);
	for(int i = 1; i <= n; i++){
		if(v[i] == 1){
			cout << i << " ";
		}
	}
}