#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	map<char, int> mp;
	
	for(int i = 0; i < s2.size(); i++)
		mp[s2[i]]++;
	
	set<char>st1;
	for(int i = 0; i < s1.size(); i++){
		if(mp[s1[i]] == 0)
			st1.insert(s1[i]);
	}
	
	for(char c:st1)
		cout << c;
}