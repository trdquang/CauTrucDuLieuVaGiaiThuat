#include <bits/stdc++.h>
using namespace std;

string viet_thuong(string s){
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	
	return s;
}

vector<string> tach_tu(string s){
	vector<string>v;
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
		string s, tmp;
		getline(cin, s);
		getline(cin, tmp);
		vector<string>v = tach_tu(s);
		for(string el: v)
			if(viet_thuong(el) != viet_thuong(tmp))
				cout << el <<  " ";
		
		cout << endl;
	}
}