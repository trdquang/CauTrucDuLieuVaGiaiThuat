#include <bits/stdc++.h>
#include <set>
using namespace std;

set<string>lay_tu(string s){
	set<string> s1;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		s1.insert(tk);
	return s1;
}

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	set<string>st1 = lay_tu(s1);
	set<string>st2 = lay_tu(s2);
	
	for(string el: st1)
		if(st2.find(el) == st2.end())
			cout << el << " ";
}
