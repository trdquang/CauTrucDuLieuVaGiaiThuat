#include <bits/stdc++.h>
using namespace std;

void next(string s){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i--] = '0';
	}
		
	if(i != -1)
		s[i] = '1';
		
	cout << s << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		next(s);
	}
}
/*
2
010101
111111
*/