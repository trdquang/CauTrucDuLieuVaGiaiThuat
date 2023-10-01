#include <bits/stdc++.h>
using namespace std;


void next(string &s){
	int i = s.size() - 2;
	while(i >= 1 && s[i] >= s[i + 1])
		i--;
	if(i == 0)
		s = "BIGGEST";
	else{
		int j = s.size() - 1;
		while(s[i] > s[j])
			j--;
		swap(s[i], s[j]);
		sort(s.begin() + i + 1, s.end());
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int tt;
		string s;
		cin >> tt >> s;
		next(s);
		cout << tt << " " << s << endl;
	}	
}
/*
3
1 123
2 279134399742
3 987
*/