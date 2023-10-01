#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<pair<int, int>>adj[1001];
vector<int>d;

void dijkstra(int s){
	d.assign(n + 1, INT_MAX);
	d[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
	q.push({0, s});
	while(!q.empty()){
		pair<int, int>t = q.top();
		q.pop();
		int u = t.second;
		int len = t.first;
		if(len > d[u])
			continue;
		for(auto it: adj[u]){
			int v = it.first, w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
			
		}
	}
	
	cout << "\n\n";
	for(int i = 1; i <= n; i++){
		cout << i << " " << d[i] << endl;
	}
}

int main(){
	cin >> n >> m;
	while(m--){
		int x, y, w;
		cin >> x >> y >> w;
		adj[x].push_back({y, w});
		adj[y].push_back({x, w});
	}
	dijkstra(1);
}
/*
9 12
1 2 4
1 8 8
2 3 8
2 8 11
3 4 7
3 6 4
3 9 2
4 5 9
4 6 14
5 6 10
6 7 2
6 9 6
*/