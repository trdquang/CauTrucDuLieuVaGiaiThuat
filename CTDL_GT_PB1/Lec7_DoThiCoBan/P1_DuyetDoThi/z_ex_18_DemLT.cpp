#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector<int>v[1001];
int truoc[1001], n, m, s, e;

void bfs(int u){
	queue<int>q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		for(int it: v[t]){
			if(used[it] == false){
				truoc[it] = t;
				q.push(it);
				used[it] = true;
			}
		}
	}
}

int main(){
	cin >> n >> m ;
	int x, y;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(used[i] == false){
			bfs(i);
			++cnt;
		}
	}
	cout << cnt;
}
/*
5 6
1 2 1 3 2 3 3 4 3 5 4 5
*/