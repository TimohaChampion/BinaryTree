#pragma once
#include <iostream>
using namespace std;

struct Node {
	int id;
	Node* l = nullptr; // left
	Node* r = nullptr; // right
	Node* p = nullptr; // parent

};

class BinaryTree
{
	Node* root = nullptr;
	int size = 0;
public:
	void push(int&& val) {
		Node* node = new Node{ val };
		if (size == 0) { root = node; size++; }
		else {
			Node* buff = root;
			while (1) {
				if (node->id > buff->id) {
					if (buff->r != nullptr) {
						buff = buff->r;
					}
					else {
						node->p = buff;
						buff->r = node;
						size++;
						break;
					}
				}
				else if(node->id < buff->id) {
					if (buff->l != nullptr) {
						buff = buff->l;
					}
					else {
						node->p = buff;
						buff->l = node;
						size++;
						break;
					}
				}
			}
		}
	}

	void push(int& val) {
		Node* node = new Node{ val };
		if (size == 0) { root = node; size++; }
		else {
			Node* buff = root;
			while (1) {
				if (node->id > buff->id) {
					if (buff->r != nullptr) {
						buff = buff->r;
					}
					else {
						node->p = buff;
						buff->r = node;
						size++;
						break;
					}
				}
				else if (node->id < buff->id) {
					if (buff->l != nullptr) {
						buff = buff->l;
					}
					else {
						node->p = buff;
						buff->l = node;
						size++;
						break;
					}
				}
				
			}
		}
	}

	void show(Node* node = nullptr) {
		if (node == nullptr) {
			//cout << "start test" << endl;
			node = root;
			cout << "size: " << size << " | ";
		}
		cout << node->id << " ";
		if (node->l != nullptr) {
			show(node->l);
		}
		else if (node->r != nullptr) {
			show(node->r);
		}
		//else cout << endl << "end test" << endl;
	}
};

