#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, cnt = 0;
bool used[1001];
vector<int> adj[1001];
int color[1001] = {0};
int degree[1001] = {0};

void kahn(){
	queue<int>q;
	for(int i = 1; i <= n; i++){
		if(degree[i] == 0)
			q.push(i);
	}
	
	int cnt = 0;
	
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cnt++;
		cout << v << "_";
		for(int x: adj[v]){
			degree[x] --;
			if(degree[x] == 0){
				q.push(x);
			}
		}
	}
	
	cout << cnt << endl;
	if(cnt == n){
		cout <<"NO\n";
	}
	else
		cout <<"YES\n";
}

int main(){
	cin >> n >> m;
	while(m--){
		cin >> x >> y;
		adj[x].push_back(y);
		degree[y] ++;
	}
	cout << "\n\n";
	for(int i = 1; i <= n; i++){
		cout << i << " " << degree[i] << endl;
	}
	kahn();
}

/*
5 6
1 2
2 3
3 1
2 4
3 4
1 5
*/