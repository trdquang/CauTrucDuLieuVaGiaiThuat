#include <bits/stdc++.h>
using namespace std;

struct edge{
	int d, c, w;	
};

int n, m;
vector<int>adj[1001];
int size[1001], parent[1001];
vector<edge>canh;

bool cmp(edge a, edge b){
	return a.w < b.w;
}

int Find(int u){
	if(u == parent[u])
		return u;
	return parent[u] = Find(parent[u]);
}

bool Union(int x, int y){
	x = Find(x);
	y = Find(y);
	
	if(x == y)
		return false;
	if(size[x] >= size[y]){
		parent[y] = x;
		size[x] += size[y];
	}else{
		parent[x] = y;
		size[y] += size[x];
	}
	return true;
}

void Krushal(){
	int d = 0;
	sort(canh.begin(), canh.end(), cmp);
	vector<edge>mst;
	
	//duyet het cac canh
	for(int i = 0; i < m; i++){
		if(mst.size() == n - 1)
			break;
		int u = canh[i].d, v = canh[i].c;
		if(Union(u, v) == true){
			mst.push_back(canh[i]);
			d += canh[i].w;
		}
	}
	//cout << mst.size() << endl;
	if(mst.size() != n - 1)
		cout << "Khong lt";
	else
		cout << d;
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		size[i] = 1;
	}
	for(int i = 0; i < m; i++){
		int x, y, w;
		cin >> x >> y >> w;
		canh.push_back(edge{x, y, w});
	}
	Krushal();
}
/*
3 3
1 2 5
2 3 3
1 3 1
//
2 1
1 2 5
*/