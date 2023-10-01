/*
Vi du 1: Chuan hoa ten theo vi du
input: nGuyen vAN lONG
output LONG, Nguyen Van
(khong co dau cach thua)
*/

#include <bits/stdc++.h>
using namespace std;

void viet_hoa(string &s){
	for(int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);	
}

void chuan_hoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++)
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
	
	viet_hoa(v[v.size()-1]);
	cout << v[v.size()-1]<<", ";
	for(int i = 0; i < v.size()-1; i++){
		chuan_hoa(v[i]);
		cout << v[i];
		if(i != v.size()-1)
			cout << " ";
	}
}