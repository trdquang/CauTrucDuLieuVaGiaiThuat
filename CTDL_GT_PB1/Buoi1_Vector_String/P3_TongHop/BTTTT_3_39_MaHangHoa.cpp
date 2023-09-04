#include <bits/stdc++.h>
using namespace std;

void xu_ly(string s){
	for(int i = 0; i <= s.size()-3; i++){
		if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4'){
			s[i] = s[i+1] = s[i+2] = 'x';
		}
	}
	
	for(int i = 0; i < s.size(); i++)
		if(s[i] != 'x')
			cout << s[i];
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	string s;
	cin.ignore();
	while(t--){
		cin >> s;
		xu_ly(s);
	}
}