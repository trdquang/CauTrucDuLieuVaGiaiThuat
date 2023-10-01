#include <bits/stdc++.h>
using namespace std;

void in_thuong(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

int main(){
	string s;
	getline(cin, s);
	in_thuong(s);
	cout << s;
}