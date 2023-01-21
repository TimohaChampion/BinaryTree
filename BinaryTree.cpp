#include "BinaryTree.h"
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

void test_binaryTree() {
	srand(time(0));
	BinaryTree tree;
	
	for (int i = 0; i < 100; i++) {
		tree.push(rand() % 100);
		tree.show();
		cout <<  endl;
	}
	
	tree.push(12);
	tree.push(14);
	tree.push(23);
	tree.push(19);
	tree.push(21);
	
	tree.show();
	
}

int main() {
	srand(time(0));

	test_binaryTree();
	system("pause");
}
