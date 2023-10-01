/*
Task1: Sap xep theo tri tuyet doi giam, neu cung tri tuyet doi
	in ra so duong truoc
Task 2: Sap xep theo tong chu so tang dan, neu cung tieu chi, 
	in ra so nho hon truoc
Task 3: Sap xep tri tuyet doi voi so x theo chieu giam, neu cunb
	tieu chi, in theo thu tu sap xep
*/

#include <bits/stdc++.h>
using namespace std;
int z = 3;

int tinh_tong(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool cmp1(int x, int y){
	if(abs(x) != abs(y))
		return abs(x) > abs(y);
	else{
		if(x > 0)
			return true;
		return false;
	}
}

bool cmp2(int x, int y){
	if(tinh_tong(x) != tinh_tong(y)){
		return tinh_tong(x) < tinh_tong(y);
	}else{
		return x < y;
	}
}

//khai z toan cuc
bool cmp3(int x, int y){
	return abs(x-z) < abs(y-z);
}

int main(){
	int a[5] = {-2, 3, 2, 1, 9};
	cout <<"First: ";
	for(auto el: a)
		cout << el << " ";
	cout << endl;
	cout <<"Task1: ";
	sort(a, a + 5, cmp1);
	for(auto el: a)
		cout << el << " ";
		
	cout << endl << endl;
	
	int b[5] = {123, 321, 22, 88, 16};
	cout <<"First: ";
	for(auto el: b)
		cout << el << " ";
	cout << endl;
	cout <<"Task2: ";
	sort(b, b + 5, cmp2);
	for(auto el: b)
		cout << el << " ";
		
	cout << endl << endl;
	
	int c[5] = {5, 3, 1, 4, 12};
	cout <<"First: ";
	for(auto el: c)
		cout << el << " ";
	cout << endl;
	cout <<"Task3: ";
	stable_sort(c, c + 5, cmp3);
	for(auto el: c)
		cout << el << " ";
		
	cout << endl << endl;
}