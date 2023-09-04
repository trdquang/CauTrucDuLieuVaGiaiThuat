#include <bits/stdc++.h>
using namespace std;

vector<int> sinh_fibo(){
	vector<int>v(92);
	v[0] = 0;
	v[1] = 1;
	for(int i = 2; i < 92; i++)
		v[i] = v[i-1] + v[i-2];
	
	return v;
}

int main(){
	vector<int>v = sinh_fibo();
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
}