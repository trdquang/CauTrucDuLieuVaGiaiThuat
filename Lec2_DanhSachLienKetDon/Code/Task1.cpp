//Thao tac voi linked list

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Node{
	int info;
	Node* link;
};
Node *first;

void init();
void insert_first(int x);
void insert_last(int x);
int insert(int y, int x);
Node* search(int x);
void process_list();


int main(){
	int choose;
	int x;
	bool in = false;
	do{
		system("cls");
		cout << "Menu\n1. Khoi tao danh sach\n"
			<<"2. Them vao dau danh sach\n"
			<<"3. Them vao cuoi danh sach\n"
			<<"4. Tim kiem\n"
			<<"5. Xuat cac phan tu\n"
			<<"6. Them vao sau mot phan tu bat ki\n"
			<<"7. Thoat\nBan chon: ";
		cin >> choose;
		switch(choose){
			case 1:
				init();
				in = true;
				break;
			case 2:
				if(in){
					cout << "Please input the value = ";
					cin >> x;
					insert_first(x);
					cout << "Success!\n";
				}else
					cout << "Please call the init function\n";
				break;
			case 3:
				if(in){
					cout << "Please input the value = ";
					cin >> x;
					insert_last(x);
					cout << "Success!\n";
				}else
					cout << "Please call the init function\n";
				break;
			case 4: 
			if(in){
					cout << "Please input the value = ";
					cin >> x;
					if(search(x) != NULL)
						cout << x << " is exits in list\n";
					else
						cout << x << " does not exits in list\n";
				}else
					cout << "Please call the init function\n";
				break;
			case 5:
				if(in){
					cout << "List is:\n";
					process_list();
				}else
					cout << "Please call the init function\n";
				break;
			case 6:
				if(in){
					int y;
					cout << "Please input the value = ";
					cin >> x;
					cout << "Please input the value which searchs and insert after: ";
					cin >> y;
					if(insert(y, x))
						cout << "Success\n";
					else
						cout << "Fail\n";
				}
				else
					cout << "Please call the init function\n";
				break;
			default:
				cout << "Exit!\n";
		}
		_getch();
	}while(choose >= 1 && choose <= 6);
}

void init(){
	first = NULL;
}

void insert_first(int x){
	Node *p = new Node;
	p->info = x;
	p->link = first;
	first = p;
}

void insert_last(int x){
	Node *p = new Node;
	p->info = x;
	p->link = NULL;
	if(first == NULL)  // danh sach rong, p se tro thanh dau va cuoi ds
		first = p;
	else{
		Node *q = first;
		while(q->link != NULL)
			q = q->link;
		q->link = p;
	}
}

Node* search(int x){
	Node *p = first;
	while(p != NULL && p->info!=x)
		p = p->link;
	return p;
}

void process_list(){
	Node *p = first;
	while(p != NULL){
		cout << p->info << endl;
		p = p->link;
	}
}

//tim bat ky, tim y co trong ds, neu co tra ve dia chi cua 
//node dang chua, neu khong tra ve NULL
int insert(int y, int x){
	//voi y la gia tri trong danh sach, x can chen
	// neu y co trong danh sach thi chen
	//neu khoong thi return k thanh cong
	
	Node *p1 = search(y);
	if(p1 != NULL){
		Node *p = new Node;	
		p->info = x;
		p->link = p1->link;
		p1->link = p;
		return 1;
	}
	
	return 0;
}
