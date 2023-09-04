#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 100
using namespace std;

void nhap(int arr[], int size);
void xuat(int arr[], int size);
int tim_kiem(int arr[], int n, int x);
int them(int arr[], int &size, int vtt, int gtt);
int xoa(int arr[], int &size, int vtx);

int main(){
	int a[MAX];
	int n;
	int chon;
	int vtt, gtt;
	int vtx;
	bool input = false;
	do{
		system("cls");
		cout << "Menu\n1. Nhap mang\n2. Xuat mang\n"
		<< "3. Tim kiem vi tri dau tien xuat hien\n"
		<< "4. Them 1 phan tu\n"
		<< "5. Xoa 1 phan tu\n"
		<< "6. Thoat\nBan chon: ";
		cin >> chon;
		switch(chon){
			case 1:
				do{
					cout << "Nhap so luong phan tu mang: ";
					cin >> n;
					if(n < 1 || n > MAX){
						cout << "Khong hop le. Nhap lai\n";
					}
				}while(n < 1 || n > MAX);
				nhap(a, n);
				input = true;
				break;
			case 2:
				if(input)
					xuat(a, n);
				else
					cout << "Vui long nhap mang\n";
				break;
			case 3:
				if(input){
					int x;
					cout << "Nhap gia tri can tim: ";
					cin >> x;
					int vt = tim_kiem(a, n, x);
					if(vt != -1){
						cout << x << " xuat hien tai " << vt << endl;
					}else{
						cout << x << " khong xuat hien trong mang" << endl;
					}
				}else{
					cout << "Vui long nhap mang\n";
				}
				break;
			case 4:
				if(input){
					cout << "Nhap vi tri can them: ";
					cin >> vtt;
					cout << "Nhap gia tri can them: ";
					cin >> gtt;
					int kq = them(a, n, vtt, gtt);
					if (kq == 0)
						cout << "Mang da day, khong the them\n";
					else if(kq == -1)
						cout << "Vi tri them khong hop le\n";
					else 
						cout << "Them thanh cong\n";
				}else{
					cout << "Vui long nhap mang!\n";
				}
				break;
			case 5:
				if(input){
					cout << "Nhap vi tri xoa: ";
					cin >> vtx;
					int kq = xoa(a, n, vtx);
					if(kq == 0)
						cout << "Xoa khong thanh cong\n";
					else
						cout << "Xoa thanh cong\n";
				}else{
					cout << "Vui long nhap mang!\n";
				}
				break;
			default: 
				cout << "Thoat\n";	
		}
		_getch();
	}while(chon >= 1 && chon <= 5);
	
}

void nhap(int arr[], int size){
	cout << "Nhap " << size << " phan tu so nguyen: ";
	for(int i = 0; i < size; i++)
		cin >> arr[i];
}

void xuat(int arr[], int size){
	cout << "Mang dang luu tru: ";
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int tim_kiem(int arr[], int n, int x){
	int i = 0;
	while(i < n && arr[i] != x)
		i ++;
		
	if(i == n)
		return -1;
	return i;
}

int them(int arr[], int &size, int vtt, int gtt){
	// vi tri them khong hop le tra ve -1
	// neu vi tri them hop le nhung khong con vi tri luu tru tra ve 0
	// thanh cong tra ve 1
	if( size + 1 > MAX)
		return 0;
	else if (vtt < 0 || vtt > size)
		return -1;
	// chen 
	// chep cac phan tu tu vtt den cuoi mang ra sau 1 phan tu 
	for(int i = size ; i > vtt; i--){
		arr[i] = arr[i - 1];
	}
	//gan gia tri them tai vtt
	arr[vtt] = gtt;
	// tang kich thuoc mang
	size ++;
	return 1;
}

int xoa(int arr[], int &size, int vtx){
	//xoa k hop le return 0
	if(vtx < 0 || vtx > size - 1)
		return 0;
	//thay doi cac phan tu 
	for(int i = vtx; i < size - 1; i++)
		arr[i] = arr[i + 1];
	size --;
	return 1;
}