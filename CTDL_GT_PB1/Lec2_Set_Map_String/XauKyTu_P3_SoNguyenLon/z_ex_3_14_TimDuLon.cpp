#include <bits/stdc++.h>
using namespace std;

int tim_du(string s, long long x){
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		res = (res * 10 + (s[i] - '0'))%x;
		res % x;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		long long x;
		getline(cin, s);
		cin >> x;
		cin.ignore();
		cout << tim_du(s, x) << endl;
	}
}
/*
2
1234519231092301293129391294120401294129412949124912491294
10
18923128381243125412845812581284518248182439123812838123817
4
*/