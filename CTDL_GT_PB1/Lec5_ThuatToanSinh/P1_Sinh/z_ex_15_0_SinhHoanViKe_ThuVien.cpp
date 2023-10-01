#include <bits/stdc++.h>
using namespace std;

bool ktra_max(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] < a[i + 1])
			return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int tt;
		string s;
		cin >> tt >> s;
		int n = s.size();
		int a[n];
		for(int i = 0; i < n; i++){
			a[i] = (s[i] - '0');
		}
		
		if(ktra_max(a, n))
			cout << tt << " BIGGEST" << endl; 
		else{
			next_permutation(a, a + n);
			cout << tt << " ";
			
			for(int i = 0; i < n; i++)
				cout << a[i];
			cout << endl;
		}
		
	}	
}
/*
3
1 123
2 279134399742
3 987
*/