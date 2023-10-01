/*
Cho danh sach canh cua do thi vo huong
=> In ra ma tran ke
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin >> m >> n;
	pair<int, int> p[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> p[i].first;
		cin >> p[i].second;
	}
	
	int a[m + 1][m + 1] = {0};
	for(int i = 1; i <= n; i++){
		a[p[i].first][p[i].second] = 1;
		a[p[i].second][p[i].first] = 1;
	}
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

/*
5 6
1 2
2 3
2 4
2 5
3 4
3 5
*/