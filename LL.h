#pragma once
#include <iostream>
#include <vector>
using namespace std;
class LL
{
private:
	struct node {
		int x;
		int xc;
		node* next;
	};
	node* head;
public:
	LL();
	void add(int v);
	void remove(int i);
	void print();
	LL vtoll(vector<int> v); // Vector to LinkedList function
	int sum();
};

