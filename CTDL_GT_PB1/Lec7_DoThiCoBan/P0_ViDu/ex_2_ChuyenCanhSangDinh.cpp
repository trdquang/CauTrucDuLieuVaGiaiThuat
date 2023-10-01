#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		//n - so dinh
		//m - so canh
		cin >> n >> m;
		vector<int> v[n + 1];
		for(int i = 0 ; i < m; i++){
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		
		for(int i = 1; i <= n; i++){
			cout << i <<": ";
			for(int x: v[i]){
				cout << x << " ";
			}
			cout << endl;
		}
	}
}