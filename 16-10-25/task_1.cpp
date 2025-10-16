#include <iostream>
#include <string>
using namespace std;

struct Node {
	string data;
	Node* next;
};

int main() {
	Node node1 = Node();
	Node node2 = Node();
	Node node3 = Node();

	node1.data = "Node 1";
	node1.next = &node2;

	node2.data = "Node 2";
	node2.next = &node3;

	node3.data = "Node 3";
	node3.next = &node1;

	Node *current = &node1;
	
	int iter = 0;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
		iter++;

		if (iter==4){
			break;
		};
	};
	cout << endl;
}
