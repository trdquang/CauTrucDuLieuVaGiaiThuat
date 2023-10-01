#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
	return a.size() < b.size();
}

int main(){
	vector<string>v(5);
	for(auto &el: v)
		getline(cin, el);
	
	sort(v.begin(), v.end(), cmp);
	for(auto el: v)
		cout << el << " ";
}