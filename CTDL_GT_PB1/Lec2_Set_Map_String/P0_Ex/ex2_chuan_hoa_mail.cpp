/*
Vi du 2: Chuan hoa email
input: nGuyen vAN lONG
output longnv@gmail.com
(khong co dau cach thua)
*/

#include <bits/stdc++.h>
using namespace std;

void viet_thuong(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
}

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	
	viet_thuong(v[v.size()-1]);
	cout << v[v.size()-1];
	for(int i = 0; i < v.size()-1; i++){
		viet_thuong(v[i]);
		cout << v[i][0];
	}
	cout << "@gmail.com";
}