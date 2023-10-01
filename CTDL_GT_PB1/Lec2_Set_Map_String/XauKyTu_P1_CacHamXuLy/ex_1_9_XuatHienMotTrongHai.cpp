#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	set<char>st;
	getline(cin, s1);
	getline(cin, s2);
	for(char c: s1)
		st.insert(c);
	
	for(char c:s2)
		st.insert(c);
	
	for(char c:st)
		cout << c;
}