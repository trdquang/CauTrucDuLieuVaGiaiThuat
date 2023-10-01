/*
Chuyen ma tran ke sang danh sach ke
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n + 1][n + 1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	
	vector<int> v[n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 1)
				v[i].push_back(j);
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << i << ": ";
		for(auto it: v[i])
			cout << it << " ";
		cout << endl;
	}
}
/*
5
0 1 0 0 0 
1 0 1 1 1
0 1 0 1 1
0 1 1 0 0
0 1 1 0 0
*/