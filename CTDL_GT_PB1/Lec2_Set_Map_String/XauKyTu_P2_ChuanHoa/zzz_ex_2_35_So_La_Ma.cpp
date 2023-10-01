#include <bits/stdc++.h>
using namespace std;

int vi_tri(char c, char s[]){
	int pos = 0;
	for(int i = 0; i < strlen(s); i++)
		if(s[i] == c){
			pos = i;
			break;
		}
	
	return pos;
}

int tinh_gia_tri(string s){
	int value[] = {1, 5, 10, 50, 100, 500, 1000};
	char ky_tu[]  = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	
	int res = value[vi_tri(s[s.size() - 1], ky_tu)];
	for(int i = s.size() - 1; i >= 1; i--){
		if(vi_tri(s[i - 1], ky_tu) >= vi_tri(s[i], ky_tu))
			res += value[vi_tri(s[i - 1], ky_tu)];
		else
			res -= value[vi_tri(s[i - 1], ky_tu)];
	}
	
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		cout << tinh_gia_tri(s) << endl;
	}
}
/*
2
III
MMMCMXCIX
*/