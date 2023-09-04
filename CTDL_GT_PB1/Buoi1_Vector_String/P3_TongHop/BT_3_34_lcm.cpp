#include <bits/stdc++.h>
using namespace std;

vector <int> phi_ham_ole(){
	vector<int> v(1000001);
	for(int i = 1; i <= 1000000; i++)
		v[i] = i;
	
	for(int i = 2; i <= 1000000; i++){
		if(v[i] == i){
			v[i]--;
			for(int j = i * 2; j <= 1000000; j+=i){
				v[j] = v[j] - v[j]/i;
			}
		}
	}
	return v;
}

vector<long long>sang_tong(){
	vector <int> ol = phi_ham_ole();
	vector <long long> v(1000001, 0);
	for(int i = 1; i<= 1000000; i++){
		for(int j = i ; j <= 1000000; j+=i){
			v[j] += i * ol[i];
		}
	}
	return v;
}

int main(){
	vector <long long>v = sang_tong();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << (v[n] +1) * n/2 << endl;
	}
}