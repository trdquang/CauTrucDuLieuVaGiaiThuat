#include <bits/stdc++.h>
using namespace std;

int dem(string s){
	int cnt = 1, res = 0;
	for(int i = 1; i < s.size(); i++){
		if(s[i] != s[i - 1])
			cnt ++;
		else{
			res = max(res, cnt);
			cnt = 1;
		}
	}
	res = max(res, cnt);
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << dem(s) << endl;
	}
}
/*
1
abcdddzozozozozozozoabcd
*/