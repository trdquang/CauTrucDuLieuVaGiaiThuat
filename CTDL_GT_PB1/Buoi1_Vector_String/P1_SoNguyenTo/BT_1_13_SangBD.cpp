#include <bits/stdc++.h>

using namespace std;

vector<int> sang_bd(){
	vector<int>v(100001);
	for(int i = 1; i <= 100000; i++)
		v[i] = i;
	
	for(int i = 2; i <= sqrt(100000); i++){
		if(v[i] == i){
			for(int j = i*i; j <= 100000; j+=i)
				v[j] = i;
		}
	}
	return v;
}

int main(){
	vector<int>v = sang_bd();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++)
			cout << v[i] << " ";
		cout << endl;
	}
}