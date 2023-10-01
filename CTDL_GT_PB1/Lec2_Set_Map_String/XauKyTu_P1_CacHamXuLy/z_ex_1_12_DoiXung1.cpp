#include <bits/stdc++.h>
using namespace std;

int ktra_dx(string s1){
	int l = 0, r = s1.size()-1;
	while(l < r){
		if(s1[l] != s1[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}

int main(){
	string s;
	getline(cin, s);
	if(ktra_dx(s))
		cout <<"YES";
	else
		cout <<"NO";
}