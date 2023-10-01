#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	string res = "hello";
	int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		if(cnt == res.size())
			break;
		if(s[i] == res[cnt])
			cnt++;
	}
	if(cnt == res.size())
		cout <<"YES";
	else
		cout <<"NO";
}