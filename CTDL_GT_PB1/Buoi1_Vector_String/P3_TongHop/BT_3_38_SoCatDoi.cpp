#include <bits/stdc++.h>
using namespace std;

void xu_ly(string s){
	int ok = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1')
			ok = 1;
		else if(!(s[i] == '0' ||s[i] == '8' || s[i] == '9')){
			ok = 0;
			break;
		}
	}
	if(ok == 0)
		cout <<"INVALID";
	else{
		ok = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '1'){
				cout << s[i];
				ok = 1;
			}else if(ok == 1){
				cout << 0;
			}
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		xu_ly(s);
	}
}