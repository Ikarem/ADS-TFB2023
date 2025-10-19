#include <iostream>
#include <string>
using namespace std;

struct Node {
	string data;
	Node* next;
	Node* prev;
};

int main() {
	Node node1 = Node();
	Node node2 = Node();
	Node node3 = Node();
	Node node4 = Node();

	node1.data = "test1";
	node1.next = &node2;
	node1.prev = NULL;

	node2.data = "test2";
	node2.next = &node3;
	node2.prev = &node1;

	node3.data = "test3";
	node3.next = &node4;
	node3.prev = &node2;

	node4.data = "test4";
	node4.next = NULL;
	node4.prev = &node3;

	cout << "Forward Traversal: ";
	Node* current = &node1;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;

	cout << "Backward Traversal: ";
	current = &node4;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->prev;
	}
	cout << endl;
}
