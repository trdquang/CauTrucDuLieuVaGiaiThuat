//do thi vo huong

#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> lay_gt(string s){
	vector<int>res;
	stringstream ss(s);
	string tk;
	while(ss >> tk)
		res.push_back(stoll(tk));
	return res;
}

int main(){
	int n, x, y;
	cin >> n;
	cin.ignore();
	string s;
	vector<int>v[n + 1];
	
	for(int i = 1; i <= n; i++){
		getline(cin, s);
		vector<int> res = lay_gt(s);
		for(auto it: res){
			if(it > i)
				v[i].push_back(it);
		}
	}
	cout <<"__________\n";
	for(int i = 1; i <= n; i++){
		for(auto it: v[i])
			cout << i << " " << it << "\n";
	}
				
}
/*
3
2 3
1 3
1 2
*/