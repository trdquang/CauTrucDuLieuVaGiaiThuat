#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	vector<int>v(s.size(), 1);
	for(int i = 0; i < s.size(); i++){
		for(int j = 0; j < i; j++){
			if(s[i] > s[j]){
				v[i] = max(v[i], v[j] + 1);
			}
		}
	}

	cout << 26 - *max_element(v.begin(), v.end());
}
/*
abczzzzzzzx
zyx
*/