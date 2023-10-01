#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int> adj[1001];
int parent[1001];
int n, m, s, e;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: adj[t]){
			if(used[it] == false){
				q.push(it);
				used[it] = true;
				parent[it] = t;
			}
		}
	}	
}

int main(){
	cin >> n >> m >> s >> e;
	while(m--){
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	bfs(s);
	if(used[e] == false)
		cout << -1 << endl;
	else{
		vector<int>path;
		while(e != s){
			path.push_back(e);
			e = parent[e];
		}
		path.push_back(e);
		reverse(path.begin(), path.end());
		for(int it: path)
			cout << it << " ";
	}
}

/*
6 9 1 6
1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
*/