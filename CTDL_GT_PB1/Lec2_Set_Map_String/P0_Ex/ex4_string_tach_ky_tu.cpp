#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tk;
	while(ss.good()){
		getline(ss, tk, ',');
		cout << tk << " ";
	}
}
/*
Lap, Trinh, Thi, Dau,  
*/