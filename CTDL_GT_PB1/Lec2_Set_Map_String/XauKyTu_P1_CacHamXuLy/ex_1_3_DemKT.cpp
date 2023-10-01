#include <bits/stdc++.h>
using namespace std;

vector<int> dem_kt(string s){
	vector<int>v(3, 0);
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i]))
			v[0]++;
		else if(isdigit(s[i]))
			v[1]++;
		else
			v[2]++;
	}
	
	return v;
}

int main(){
	string s;
	getline(cin, s);
	vector<int>v = dem_kt(s);
	cout << v[0] << " " << v[1] << " " << v[2];
}