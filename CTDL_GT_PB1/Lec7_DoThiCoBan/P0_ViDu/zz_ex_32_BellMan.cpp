#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>>adj[1001];
int n, m;

void inp(){
	cin >> n >> m;
	while(m--){
		int x, y, w;
		cin >> x >> y >> w;
		adj[x].push_back({y, w});
	}
}

void bellmanford(int u){
	vector<int>d(n + 1, 1e9);
	d[u] = 0;
	for(int i = 1; i <= n - 2; i++){
		for(int u = 1; u <= n; u++){
			for(auto it: adj[u]){
				int v = it.first, c = it.second;
				d[v] = min(d[v], d[u] + c);
			}
		}
	}
	cout << endl << endl;
	for(int i = 1; i <= n; i++)
		cout << d[i] << " ";
}

int main(){
	inp();
	bellmanford(1);
}
/*
5 9
1 2 1
1 5 3
2 5 8
2 3 3
2 4 3
3 4 1
4 5 -5
4 3 2
5 4 4
*/