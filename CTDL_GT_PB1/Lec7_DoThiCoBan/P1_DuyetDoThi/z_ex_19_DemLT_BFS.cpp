#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>adj[1001];
int n, m, x, y;

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
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		cin >> n >> m;
		while(m--){
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			if(used[i] == false){
				bfs(i);
				cnt++;
			}
		}
		
		cout << cnt << endl;
	}
}
/*
1 
6 6
1 2 1 3 2 3 3 4 3 5 4 5
*/