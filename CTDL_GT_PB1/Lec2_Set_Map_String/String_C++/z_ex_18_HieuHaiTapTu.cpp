#include <bits/stdc++.h>
#include <set>
using namespace std;

set<string> tim_hieu(string s1, string s2){
	set<string> ds2, ds3;
	stringstream ss2(s2);
	string tk;
	while(ss2 >> tk)
		ds2.insert(tk);
	
	stringstream ss1(s1);
	while(ss1 >> tk)
		if(ds2.find(tk) == ds2.end())
			ds3.insert(tk);
	return ds3;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> ds = tim_hieu(s1, s2);
		for(string it: ds)
			cout << it << " ";
		
		cout << endl;
	}
}