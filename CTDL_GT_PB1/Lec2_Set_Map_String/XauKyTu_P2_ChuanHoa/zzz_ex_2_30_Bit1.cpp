#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int id = -1, sum = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '1'){
				if(id != -1)
					sum = sum +(i - id - 1);
				id = i;
			}
		}
		cout << sum << endl;
	}
}
/*
3
010011
0
1111000
*/