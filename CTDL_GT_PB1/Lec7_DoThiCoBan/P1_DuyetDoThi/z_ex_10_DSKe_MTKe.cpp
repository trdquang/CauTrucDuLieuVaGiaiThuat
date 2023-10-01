#include <bits/stdc++.h>
using namespace std;

vector<int> lay_gt(string s){
	vector<int>res;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		res.push_back(stoll(tk));
	return res;
}

int main(){
	int n, x, y;
	string s;
	cin >> n;
	cin.ignore();
	int a[n + 1][n + 1] = {0};
	for(int i = 1; i <= n; i++){
		getline(cin, s);
		vector<int> res = lay_gt(s);
		for(auto it: res)
			a[i][it] = 1;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << a[i][j] <<" ";
		cout << endl;
	}
}
/*
3
2 3
1 3
1 2
*/