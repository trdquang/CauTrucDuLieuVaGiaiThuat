#include <bits/stdc++.h>
using namespace std;

string add(string s1, string s2){
	while(s1.size() < s2.size())	s1 = "0" + s1;
	while(s2.size() < s1.size())	s2 = "0" + s2;
	int nho = 0;
	string res = "";
	for(int i = 0; i < s1.size(); i++){
		int tmp = (s1[i] - '0') + (s2[i] - '0') + nho;
		nho = tmp/10;
		tmp %=10;
		res = (char)(tmp + '0') + res;
	}
	if(nho){
		res = (char)(nho + '0') + res;
	}
	
	return res;
}

int main(){
	while(true){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		cout << add(s1, s2) << endl;
	}
}