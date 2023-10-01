#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	set<char>st;
	for(char c:s){
		st.insert(tolower(c));
	}
	if(st.size() == 26)
		cout << "YES";
	else
		cout <<"NO";
}