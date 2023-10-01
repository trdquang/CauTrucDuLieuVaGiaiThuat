#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;

void thao_tac(map<int, int> &mp, string s){
	vector<string>v;
	stringstream ss(s);
	string tk;
	while(ss.good()){
		getline(ss, tk, '+');
		v.push_back(tk);
	}	
	for(auto el: v){
		int heso = 0, mu = 0;
		int i = 0;
		for(i = 0; i < el.size(); i++){
			if(isdigit(el[i])){
				heso = heso * 10 + el[i] - '0';
			}else if(el[i] == '*')
				break;
		}
		
		while(i < el.size()){
			if(isdigit(el[i])){
				mu = mu * 10 + el[i] - '0';
			}
			i++;
		}

		mp[mu] += heso;
		
	}
}

int main(){	
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		map<int, int> mp;
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		thao_tac(mp, s1);
		thao_tac(mp, s2);
		
		string str = "*x^";
		
		int dem = 1;
		
		
		for(auto it = mp.rbegin(); it != mp.rend(); it++){
			cout << it->second << str << it->first;
			if(dem < mp.size())
				cout << " + ";
			dem ++;
		}
		
	}
}
/*
1
2*x^5 + 3*x^2 + 5*x^0
4*x^5 + 2*x^1 + 10*x^0
*/