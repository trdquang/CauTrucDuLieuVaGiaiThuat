#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	vector<int>chan, le;
	for(int &x: a){
		cin >> x;
		if(x % 2 == 0)
			chan.push_back(x);
		else
			le.push_back(x);
	}
	
	sort(chan.begin(), chan.end());
	sort(le.begin(), le.end(), greater<int>());
	int i = 0, j = 0;
	for(int k = 0; k < n; k++){
		if(a[k] % 2 == 0)
			cout << chan[i++] << " ";
		else
			cout << le[j++] << " ";
	}
	
}