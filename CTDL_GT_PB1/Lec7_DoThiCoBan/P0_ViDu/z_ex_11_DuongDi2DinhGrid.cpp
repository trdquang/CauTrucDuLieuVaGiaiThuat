#include <bits/stdc++.h>
using namespace std;

int n, m, a[501][501], d[501][501];
int s1, s2, t1, t2;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {-1, -1, 0, 1, 1, 0, 1, -1};

void bfs(int i, int j){
	queue<pair<int, int>>q;
	q.push({i, j});
	a[i][j] = -1;
	d[i][j] = 0;
	
	while(!q.empty()){
		pair<int, int> t = q.front();
		q.pop();
		for(int k = 0; k < 8; k++){
			int i1 = t.first + dx[k];
			int j1 = t.second + dy[k];
			if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1){
				q.push({i1, j1});
				a[i1][j1] = -1;
				d[i1][j1] = d[t.first][t.second] + 1;
			}
		}
	}
}

void solve(){
	bfs(s1, s2);
	cout << d[t1][t2] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		
		cin >> n >> m >> s1 >> s2 >> t1 >> t2;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++)
				cin >> a[i][j];
		}
		solve();
	}
}

/*
1
5 5 0 0 3 1
1 1 0 0 0
0 1 0 0 1
1 0 0 1 1
0 1 0 0 0
1 0 1 0 1
//
1
5 5
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
*/