#include <bits/stdc++.h>
#include <vector>
using namespace std;

void max_num(string a, string b){
	for(char &it: a)
		if(it == '5')
			it = '6';
	
	for(char &it: b)
		if(it == '5')
			it = '6';
	
	cout << stoll(a) + stoll(b);
}

void min_num(string a, string b){
	for(char &it: a)
		if(it == '6')
			it = '5';
	
	for(char &it: b)
		if(it == '6')
			it = '5';
	
	cout << stoll(a) + stoll(b);
}

vector<string> tach_tu(string s){
	vector<string> v;
	stringstream ss(s);
	string tk;
	while(ss >> tk){
		v.push_back(tk);
	}
	return v;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	
	while(t--){
		string s;
		getline(cin, s);
		vector<string>v = tach_tu(s);
		min_num(v[0], v[1]);
		cout <<  " ";
		max_num(v[0], v[1]);
		cout << endl;
	}
}