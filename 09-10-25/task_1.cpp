#include <iostream>
#include <string>
using namespace std;

struct Node {
	string data;
	Node* ptr;
};

int main() {
	Node node1 = Node();
	Node node3 = Node();

	node1.data = "Node1";
	node1.ptr = &node3; // Pointer to node3
	
	node3.data = "Node3";
	node3.ptr = NULL;

	Node *current = &node1;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->ptr;
	};
	cout << endl;
}



