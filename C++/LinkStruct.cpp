#include <iostream>
//#define NULL 0
using namespace std;

struct Student {
	long num;
	float score;
	struct Student* next;
};


int main(int argc,char** argv) {
	Student a,b,c,*head,*p;
	a.num=1001;
	a.score=89.3;				
	b.num=1002;
	b.score=82.3;
	c.num=1003;
	c.score=81.3;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	p=head;
	do {
		cout << p->num << "  " << p->score << endl;
		p = p->next;
	}while(p!=NULL);
	return 0;
}
