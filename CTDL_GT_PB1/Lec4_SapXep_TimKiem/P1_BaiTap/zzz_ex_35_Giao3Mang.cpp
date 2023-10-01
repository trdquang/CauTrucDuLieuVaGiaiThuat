#include <bits/stdc++.h>
using namespace std;

vector<int>giao_3_day_so(int a[], int b[], int c[], int n, int m, int p){
	int i = 0, j = 0, k = 0;
	vector<int>v;
	while(i < n && j < m && k < p){
		if(a[i] == b[j] && b[j] == c[k]){
			v.push_back(a[i]);
			i++;	j++;	k++;
		}else if(a[i] <= b[j] && a[i] <= c[k]){
			i++;
		}else if(b[j] <= a[i] && b[j] <= c[k]){
			j++;
		}else{
			k++;
		}
	}
	return v;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, p;
		cin >> n >> m >> p;
		int a[n], b[m], c[p];
		vector<int>v;
		for(int &x: a)	cin >> x;
		for(int &x: b)	cin >> x;
		for(int &x: c)	cin >> x;
		v = giao_3_day_so(a, b, c, n, m, p);
		if(v.size() == 0)
			cout << -1 << endl;
		else{
			for(int el: v)
				cout << el << " ";
			cout << endl;
		}
	}
}
/*
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
*/