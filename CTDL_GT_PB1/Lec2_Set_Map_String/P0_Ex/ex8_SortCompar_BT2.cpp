/*
Task 1. Sap xep xau theo thu tu chieu dai tang dan
Task 2. Sap xep xau theo thu tu chieu dai tang dan. Neu
	cung chieu dai, tu co tu dien nho hon in ra truoc
*/


#include <bits/stdc++.h>
using namespace std;

bool cmp1(string x, string y){
	return x.size() < y.size();
}

bool cmp2(string x, string y){
	if(x.size() != y.size())
		return x.size() < y.size();
	else{
		return x < y;
	}
}

int main(){
	string a[4] = {"java", "c++", "c", "javascript"};
	cout <<"First: ";
	for(string el: a)
		cout << el << " ";
	cout << endl;
	sort(a, a+4, cmp1);
	cout <<"Task1: ";
	for(string el:a)
		cout << el << " ";
	cout << endl << endl;
	
	
	string b[4] = {"java", "c++", "php", "sql"};
	cout <<"First: ";
	for(string el: b)
		cout << el << " ";
	cout << endl;
	sort(b, b+4, cmp2);
	cout <<"Task2: ";
	for(string el:b)
		cout << el << " ";
	cout << endl << endl;
}