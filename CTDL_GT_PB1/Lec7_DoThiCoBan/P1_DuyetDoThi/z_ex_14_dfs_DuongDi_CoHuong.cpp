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
	cin >> n >> m >> s >> e;
	int x, y;
	while(m--){
		cin >> x >> y;
		v[x].push_back(y);
	}
	
	bfs(s);
	if(used[e] == false)
		cout << -1;
	else{
		vector<int> dd;
		while(e != s){
			dd.push_back(e);
			e = truoc[e];
		}
		dd.push_back(e);
		for(int i = dd.size() - 1; i >= 0; i--)
			cout << dd[i] << " ";
	}
}
/*
6 9 1 6
1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4
*/