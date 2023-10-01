#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int>s;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			s.insert(x);
		}
		int q;
		cin >> q;
		while(q--){
			int x;
			cin >> x;
			if(s.find(x) == s.end()){
				cout << "NO\n";
			}else{
				cout << "YES\n";
			}
		}
	}
}