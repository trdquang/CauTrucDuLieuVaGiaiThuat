#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	set<string> st;
	while(t--){
		string s;
		getline(cin, s);
		st.insert(s);
	}
	cout << st.size() << endl;
}