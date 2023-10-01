#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	
	int x;
	cin >> x;
	if(s.find(x) == s.end()){
		cout <<"Khong tim thay" << endl;
	}else
		cout <<"Tim thay" << endl;
}