#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool compar(int x, int y){
	if(x < y)
		return true;
	return false;
}

int main(){
	vector<int>v(5);
	for(int i = 0; i < 5; i++){
		cin >> v[i];
	}
	
	sort(v.begin(), v.end(), compar);
	for(auto el: v)
		cout << el << " ";
}
/*
1 9 5 3 6
*/