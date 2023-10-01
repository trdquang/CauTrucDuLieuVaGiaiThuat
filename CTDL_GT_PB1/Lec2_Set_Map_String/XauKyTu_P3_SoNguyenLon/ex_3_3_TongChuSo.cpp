#include <bits/stdc++.h>
using namespace std;

int tinh_tong(string s){
	int res = 0;
	for(char c : s)
		res += c - '0';
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << tinh_tong(s) << endl;
	}
}
/*
2
812317349123232323232323232323232323232318247124
12316237123333333333333333333331231
*/