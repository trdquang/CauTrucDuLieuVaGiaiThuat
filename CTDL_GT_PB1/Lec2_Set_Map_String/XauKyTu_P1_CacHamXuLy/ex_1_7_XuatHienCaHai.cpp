#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	string s1, s2;
	set<char>st1, st2;
	getline(cin, s1);
	getline(cin, s2);
	
	for(int i = 0; i < s1.size(); i++)
		st1.insert(s1[i]);
	for(int i = 0; i <s2.size(); i++)
		st2.insert(s2[i]);
	
	for(char c:st1){
		if(st2.find(c) != st2.end())
			cout << c;
	}
}