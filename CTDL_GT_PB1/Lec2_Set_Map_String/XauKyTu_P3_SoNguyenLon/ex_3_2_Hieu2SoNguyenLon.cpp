#include <bits/stdc++.h>
using namespace std;

string tru(string a, string b){
	string res = "";
	while(a.size() < b.size())	a = "0" + a;
	while(b.size() < a.size())	b = "0" + b;
	
	//dat a la so lon hon
	int am = 0;
	if(a < b){
		swap(a, b);
		am = 1;
	}
	
	int nho = 0;
	for(int i = a.size() - 1; i >= 0; i--){
		int x = int(a[i] - '0') - (b[i] - '0') - nho;
		if(x < 0){
			x += 10;
			nho = 1;
		}else
			nho = 0;
		res = char(x + '0') + res;
	}
	string kq = "";
	int i;
	for(i = 0; i < res.size(); i++)
		if(res[i] != '0')
			break;
	
	for(int j = i; j < res.size(); j++)
		kq += res[j];
	
	if(am == 1)
		kq = "-" + kq;
	return kq;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << tru(a, b) << endl;
	}
}
/*
3
192389123919239123912912931923912931923
81239123912931290491284912498
888888888888888888888888888888888888888888888888888888888
888888888888888888888888888888888888888888888888888888886
912939123912931923912391283473572347237421347124124102789541906274512
912939123912931923912391283473572347237421347124124102789541906274512
*/