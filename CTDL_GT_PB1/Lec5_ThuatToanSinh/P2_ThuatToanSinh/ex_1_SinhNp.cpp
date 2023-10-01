#include <bits/stdc++.h>
using namespace std;

void next(string &s){
	int n = s.size() - 1;
	int i = n;
	while(i >= 0 && s[i] == '1')
		s[i--] = '0';
	if(i == -1){
		for(int i = 1; i <= n; i++)
			s[i] = '0';
	}else{
		s[i] = '1';
	}
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		next(s);
		cout << s << endl;
	}
}
/*
3
010101
000000
11111111
*/