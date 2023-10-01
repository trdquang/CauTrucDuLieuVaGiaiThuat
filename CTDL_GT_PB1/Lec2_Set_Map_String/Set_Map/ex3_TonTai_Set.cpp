#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		set<int>s;
		vector<int>v;
		for(int &x:a){
			cin >> x;
		}
		for(int &x: b){
			cin >> x;
			s.insert(x);
		}
			
		int ktra = 0;
		
		for(int i = 0; i < n; i++){
			if(s.find(a[i]) != s.end()){
				continue;
			}else{
				cout << a[i] << " ";
				ktra ++;
			}
		}
		if(ktra == 0)
			cout << "NOT FOUND";
		cout << endl;
	}
}
/*
1
4 5
1 2 2 9
2 0 9 8 3
*/