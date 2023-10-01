#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		set<string>st;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			st.insert(tmp);
		}
		cout << st.size() << endl;
	}
}