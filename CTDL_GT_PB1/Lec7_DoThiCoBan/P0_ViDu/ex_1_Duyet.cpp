#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	
	int bbr, bbv;
	vector<vector<int>>v;
	for(int i = 1; i <= n ; i++){
		bbr = bbv = 0;
		for(int j = 1; j <= n; j++){
			bbr += a[i][j];
			bbv += a[j][i];
			vector<int>tmp;
			if(i <= j && a[i][j] == 1){
				tmp.push_back(i);
				tmp.push_back(j);
				v.push_back(tmp);
			}
			
		}
		cout << bbr << " " << bbv << endl;
	}
	
	cout << endl;
	for(auto it: v){
		cout << it[0] << " " << it[1] << endl;
	}
}

/*
5
0 1 0 0 0
1 0 1 1 1
0 1 0 1 1
0 1 1 0 0 
0 1 1 0 0
*/