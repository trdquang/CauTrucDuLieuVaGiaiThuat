#include <bits/stdc++.h>
using namespace std;

string tu_khong_lap(string s){
	map<char, int>mp;
	for(char c:s)
		mp[c]++;
	string res = "";
	for(auto el: mp)
		if(el.second == 1)
			res += el.first;

	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		cout << tu_khong_lap(s) << endl;
	}
}
/*
2
ABCDEAABC
ABC
*/