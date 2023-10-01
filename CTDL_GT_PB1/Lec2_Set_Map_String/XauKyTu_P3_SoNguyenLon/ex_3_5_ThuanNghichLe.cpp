#include <bits/stdc++.h>
using namespace std;

int ktra_so(string a){
	int l = 0, r = a.size() - 1;
	while(l <= r){
		if((a[l] - '0') % 2 == 0)
			return 0;
		if(a[l] != a[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(ktra_so(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
/*
3
2222222222222222222225222222222222222222222
555555555555555555555555555555555555555555555
28882
*/