#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	set<char> st;
	string s;
	getline(cin, s);
	for(char c: s){
		if(c >= 'a' && c <= 'z')
			st.insert(c);
	}
	
	cout << st.size() << endl;
}