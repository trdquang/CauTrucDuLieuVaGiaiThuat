#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int ct[3] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ct[a[i]]++;
		}
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < ct[i]; j++)
				cout << i << " ";
		}
		
		cout << endl;
	}
}