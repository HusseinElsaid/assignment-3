#include "LL.h"
LL::LL() {
	head = nullptr;
}
void LL::add(int v) {
	node* q = head;
	while (q->next != NULL) {
		if (v == q->x) {
			q->xc++;
			cout << "A node with the same value is already present so number of occurences will be incremented.";
			return;
		}
		q = q->next;
	}
	node* t = new node;
	t->x = v;
	t->xc = 1;
	q->next = t;
	t->next = NULL;
}
void LL::remove(int i) {
	node* q = head;
	node* p = nullptr;
	for (int j = 0; j < i; j++) {
		p = q;
		q = q->next;
	}
	p->next = q->next;
	node* b = head;
	while (b != NULL) {
		if (b->x == q->x) {
			b->xc--;
		}
	}

}
void LL::print() {
	node* q = head;
	while (q != NULL) {
		cout << q->x<< " ";
	}
}
LL LL::vtoll(vector<int> v) {	
	LL* l = new LL;
	for (int i = 0; i < v.size(); i++){
		l->add(v[i]);
	}
	return *l;
}
int LL::sum() {
	int s = 0;
	node* q = head;
	while (q != NULL) {
		s = s + q->x * q->xc;
	}
	return s;
}