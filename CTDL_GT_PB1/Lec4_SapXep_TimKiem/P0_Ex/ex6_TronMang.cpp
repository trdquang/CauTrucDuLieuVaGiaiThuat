#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> tron_mang(vector<int>v1, vector<int>v2){
	vector<int>v;
	int i = 0, j = 0;
	while(i < v1.size() && j < v2.size()){
		if(v1[i] < v2[j]){
			v.push_back(v1[i]);
			i++;
		}else{
			v.push_back(v2[j]);
			j++;
		}
	}
	
	while(i < v1.size()){
		v.push_back(v1[i]);
		i++;
	}
	
	while(j < v2.size()){
		v.push_back(v2[j]);
		j++;
	}
	
	return v;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int>v1(n);
	vector<int>v2(m);
	for(int i = 0; i < n; i++){
		cin >> v1[i];
	}
	
	for(int j = 0; j < m; j++)
		cin >> v2[j];
		
	vector<int>v = tron_mang(v1, v2);
	for(int el: v)
		cout << el << " ";
}

/*
5 6
1 3 5 7 9
2 4 5 5 6 7
*/